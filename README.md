## 🚀 openPoli - Politécnico Modelo (https://open.ipm.edu.ar)

## 📝 Solidmation - HFEasy Firmware
    
Fork del repositorio HFEasy con la adaptación para toma corrientes inteligentes marca Solidmation

# hfeasy
Firmware for devices using the HF-LPx100 or LPB130 modules.

You can contribute to this project by:
- Developing code and submit PR's
- Posting photos/info to support new devices
- Sending beer money to Revolut tag [@ljalves](http://revolut.me/ljalves) (or click)

# Implemented Features:
* MQTT client
* HTTP config, control and status webpages

After flashing hfeasy, open web page:
  * http://\<deviceip\>/
* HTTP control:
  * status: http://\<deviceip\>/state
  * on: http://\<deviceip\>/state?sw=1
  * off: http://\<deviceip\>/state?sw=0
* Timers:
  * http://\<deviceip\>/timer

# Recovery mode
  * The device will reset config options and change to AP mode so that you can re-configure it.
    * Module: Toggle the switch 6 or more times within 3 sec
    * Plug: Press and hold the switch for more than 3 sec

# Known supported devices
* Wifi Plug ([Ankuoo REC](http://www.lumitek.cn/en/productsd.php?pid=1095), [Ankuoo NEO](https://www.ankuoo.com/products/?sort=1))

![Wifi Plug](http://www.lumitekgroup.com/upload/2015062911265369.jpg)

* Wifi Module (http://www.lumitek.cn/en/productsd.php?pid=1093)
![Wifi Module](http://www.lumitekgroup.com/upload/2015062315503112.jpg)

* US Wall Dimmer (AW51011D)
<img src="https://images-na.ssl-images-amazon.com/images/I/413UPchrIfL._SL1000_.jpg" width="400">

* US Wall Switch (AW51011) (https://github.com/ljalves/hfeasy/issues/12)

* G-Homa (https://github.com/ljalves/hfeasy/issues/26)

* Any LPB100/LPT100F/LPB130 device should be supported using the custom config option


# Devices supported with manual config:

* Orvibo S20 WiWo-S20-E2 (https://github.com/ljalves/hfeasy/issues/21)

# Firmware
* [Releases](https://github.com/ljalves/hfeasy/releases/)

* [Old download place](https://drive.google.com/open?id=1HWl-QiYM2u8lW9TAv1M6Kr9DPkj1_wRG)
* hfeasy 0v7
  * Changes:
    * MQTT fixes: Publish state when sub and pub topics are different
* hfeasy 0v6
  * Changes:
    * Added WiFi LED config option (under /config)
    * US wall dimmer module is now supported
* hfeasy 0v5
  * Changes:
    * Due to limited webpage size, config was split in 2 pages (/config and /config_mqtt)
    * Added "HTTP auth" config option (sets authentication ON for all webpages)
    * Increased switch debounce time (should fix random turn ons/offs)
    * /state webpage changed to JSON format - if your setup parses the previous webpage output, you need to change it.
* hfeasy 0v4
  * Changes:
    * Added more status (hostname and uptime)
    * Fixed missing HTTP headers
    * More robust switch debouncer for on/off module
* hfeasy 0v3
  * Changes:
    * Added MQTT QoS setting
    * Added module hostname setting
    * Added on/off countdown timers (http://\<ip\>/timer)
* hfeasy 0v2
  * Changes:
    * Added MQTT authentication
    * Added recovery mode for both devices: press the switch 6 times withing 2 sec and the device enters AP mode and resets config
    * Added buzzer driver (for on/off module only). Right now just for fun, try: http://\<ip\>/state?tone=3 (dont go > 21)
* haeasy 0v1
  * Initial release

* Original firmware:
  * Also available on the gdrive folder + factory webpage .bin

# Device info
All devices have a hard-coded firmware flash webpage at: http://\<deviceip\>/iweb.html

This webpage allows to configure the device wifi parameters and flash new firmware.
No matter which firmware you flash, this webpage is always there (make the device almost "unbrickable").

There is another webpage at: http://\<deviceip\>/

In here you can setup the wifi parameters, change the access user/pass and flash new firmware too.
The access to there webpages is password protected.
The user/pass defaults to admin/admin.
If you upgrade to the latest official firmware, the user/pass is changed to admin/Lumlink@100

# TODO
* Add dayly/weekly timers (configurable by webpage)
* ... and suggestions are welcome (open an issue)

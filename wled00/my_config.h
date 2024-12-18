#pragma once

/*
 * Welcome!
 * You can use the file "my_config.h" to make changes to the way WLED is compiled!
 * It is possible to enable and disable certain features as well as set defaults for some runtime changeable settings.
 *
 * How to use:
 * PlatformIO: Just compile the unmodified code once! The file "my_config.h" will be generated automatically and now you can make your changes.
 *
 * ArduinoIDE: Make a copy of this file and name it "my_config.h". Go to wled.h and uncomment "#define WLED_USE_MY_CONFIG" in the top of the file.
 *
 * DO NOT make changes to the "my_config_sample.h" file directly! Your changes will not be applied.
 */

// uncomment to force the compiler to show a warning to confirm that this file is included
//#warning **** my_config.h: Settings from this file are honored ****

/* Uncomment to use your WIFI settings as defaults
  //WARNING: this will hardcode these as the default even after a factory reset
#define CLIENT_SSID "Your_SSID"
#define CLIENT_PASS "Your_Password"
*/

//#define MAX_LEDS 1500       // Maximum total LEDs. More than 1500 might create a low memory situation on ESP8266.
#define MDNS_NAME "carwash"    // mDNS hostname, ie: *.local
#define WLED_AP_SSID "CarWash Lights"
#define WLED_AP_PASS "Cwash1234"
#define DEFAULT_LED_TYPE TYPE_ANALOG_3CH
//uint8_t pins[5] = {19, 18, 17, 255, 255}; cf.cpp 141
//WLED_GLOBAL bool doInitBusses _INIT(true); - from wled.h 711
//
//bool captivePortal(AsyncWebServerRequest *request) from wled_server 91
 //return false;
//
// Created by luca on 02/02/21.
//

#ifndef WIFICONF_WIFICONF_H
#define WIFICONF_WIFICONF_H

#endif //WIFICONF_WIFICONF_H

#ifndef ESP8266WIFI_H
#include <ESP8266WiFi.h>
#endif
#ifndef ESP8266WEBSERVERSECURE_H
#include <ESP8266WebServerSecure.h>
#endif
#include <HTMLPages.hpp>

/**
 * Starts a secure web server running until SSID and password are correctly set.
 * It is recommended to reboot your ESP after you stored returned data to apply new data.
 *
 * @return 2-dimension array containing {SSID, password}
 */
String *startWiFiConfiguration();

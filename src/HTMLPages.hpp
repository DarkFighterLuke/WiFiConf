//
// Created by luca on 02/02/21.
//

#ifndef WIFICONF_HTMLPAGES_H
#define WIFICONF_HTMLPAGES_H

#endif //WIFICONF_HTMLPAGES_H

const char INDEX_PAGE[] PROGMEM = R"=====(
<html>
    <head>
        <title>Set me</title>
    </head>
    <body>
        <center>
            <form action="/setWiFi" method="POST">
                <label for="SSID">SSID:<br>
                <input type="text" name="SSID"><br>
                <label for="password">Password:<br>
                <input type="password" name="password"><br>
                <input type="submit" value="Imposta">
            </form>
        </center>
    </body>
</html>
)=====";

const char SUCCESS_PAGE[] PROGMEM = R"=====(
<html>
    <head>
        <title>Success</title>
    </head>
    <body>
        <center>
            <h2>WiFi Successfully Set</h2>
        </center>
    </body>
</html>
)=====";

const char FAILURE_PAGE[] PROGMEM = R"=====(
<html>
    <head>
        <title>Failure</title>
    </head>
    <body>
        <center>
            <h2>WiFi configuration failed</h2>
            <h3>Something went wrong.<br>
            Go <a href="/">Home</a> and retry.</h3>
        </center>
    </body>
</html>
)=====";
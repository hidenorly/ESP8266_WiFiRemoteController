# ESP8266_WiFiRemoteController

This is WiFi enabled Remote Controller for Air Conditioner based on ESP8266(W-ROOM02), Universal A/C Remote (K-1028E) and AC Current sensor (SCT013-000).

This can control Air Conditioner power through WiFi.

# Dependencies

## General steps to include zip library

On Arduino IDE,

1. Sketch
2. Include library
3. Install Zip library
4. Specify the following zip-ed libraries.

## Time library (by PaulStoffregen-san)

```
$ git clone https://github.com/PaulStoffregen/Time.git Time
$ cd Time
$ git archive HEAD --output=../Time.zip
```

## NTP library (by exabugs-san)

```
$ git clone https://github.com/exabugs/sketchLibraryNTP NTP
$ cd NTP
$ git archive HEAD --output=../NTP.zip
```

## Adafruit MQTT

```
$ git clone https://github.com/adafruit/Adafruit_MQTT_Library.git MQTT
$ cd MQTT
$ git archive HEAD --output=../MQTT.zip
```

# Schematics

To be shared.
/* 
 Copyright (C) 2016,2017 hidenorly

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/

#ifndef __CONFIG_H__
#define __CONFIG_H__

// --- config
extern const int MODE_PIN;

// --- config: WIFI
extern const char* WIFI_CONFIG;
extern const char* WIFIAP_PASSWORD;

// --- config: NTP
extern const char* NTP_SERVER;

// --- config: httpd
extern int HTTP_SERVER_PORT;
extern const char* HTML_HEAD;

// --- config: MQTT
#define ENABLE_MQTT 1
#if ENABLE_MQTT
extern const char* MQTT_SERVER;
extern const int MQTT_SERVER_PORT;
//extern const char* MQTT_CLIENTID;
#define MQTT_CLIENTID "/hidenorly/"
extern const char* MQTT_USERNAME;
extern const char* MQTT_PASSWORD;
#endif // ENABLE_MQTT

// --- config: sensor support
#define ENABLE_SENSOR
#define ENABLE_SENSOR_TEMPERATURE 1
#define ENABLE_SENSOR_HUMIDITY 1
#define TEMPERATURE_SENSOR_DRIVER DHT11

// --- config: fan power
#define ENABLE_SWITCH 1
#define SWITCH_GPO 5

// --- GPIO initial setup
void initializeGPIO(void);

#endif // __CONFIG_H__


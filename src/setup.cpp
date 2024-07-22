//=======================================================================
// File:                setup.cpp
// Author:              Marcelo Castello (https://github.com/mcastellogh)
// Licence:             GPLV3+
// Version:             1.0.0
// Date:                Julio 2024
// Info:                Project for Electrónica II
//=======================================================================

//--Includes
#include "setup.h"

//--Local variables
uint8_t var_count;
Config config;

//--Extern variables




//--Startup function
void App_setup(void){
    Serial.begin(SERIAL_BAUDRATE);

    //--PINS
    pinMode(ONBOARD_LED_PIN,OUTPUT);
    pinMode(WIFI_LED_PIN,OUTPUT);

    led_welcome();

    //--Init wifi
    config.ssid="MAC_E";
    config.ssid_pass="wpaadministrator08";
    config.ap_ssid=config.device;
    config.ap_pass="12345678";
    wifi_init(WIFI_AP_STA);

    //--Presentation
    Serial.println("\r\nCátedra de Electrónica II UTN-FRRO");
    Serial.println("Connection and maintain WiFi network");
}
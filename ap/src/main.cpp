#include <ESP8266WiFi.h> 
// libreria wifi para esp-8266
 
#include "config.h"  // archivo que contiene variables de configuracion
#include "ESP8266_Utils.hpp"  //archivo que contiene funcion para conexion a wifi
 
void setup()
{
  Serial.begin(115200);
  delay(100); // espera necesaria despues de inicializar el Serial
  Serial.print("iniciando");
  ConnectWiFi_AP();
}
 
void loop() 
{
}
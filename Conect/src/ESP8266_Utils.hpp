void ConnectWiFi_STA(){
    Serial.println("");
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid,pass);

      // esperar a que nos conectemos
  while(WiFi.status() != WL_CONNECTED)
  {
    delay(100);
    Serial.print('.');
  }

  // mostramos mensajes de exito y direccion ip asignada
  Serial.println("");
  Serial.print("conectado a: \t");
  Serial.println(ssid);
  Serial.print("IP address:\t");
  Serial.println(WiFi.localIP());
}
void ConnectWiFi_STA()

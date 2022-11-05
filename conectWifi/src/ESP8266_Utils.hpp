void ConnectWiFi_STA()
{
   Serial.println("conectando");
   WiFi.mode(WIFI_STA);// establezco el wifi en modo de conexion
   WiFi.begin(ssid, password);// inicializo wifi con red y password, es posible conectarse a multiples redes
   while (WiFi.status() != WL_CONNECTED) //si status es difirente que conectado
   { 
     delay(200);  
     Serial.print('.'); 
   }
 
   Serial.println("");
   Serial.print("Iniciado STA:\t");
   Serial.println(ssid);
   Serial.print("IP address:\t");
   Serial.println(WiFi.localIP());
}
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include "index.h"
#define LED D0
const char * ssid = "iot";
const char * password = "iot12345";
Servidor ESP8266WebServer (80);

void handleRoot () 
{
 String s = página da web;
 server.send (200, "text / html", s);
}

vazio sensor_data () 
{
 int a = analogRead (A0);
 int temp = a / 4,35;
 String sensor_value = String (temp);
 server.send (200, "texto / plano", valor_do_sensor);
}

void led_control () 
{
 String state = "OFF";
 String act_state = server.arg ("estado");
 if (act_state == "1")
 {
  digitalWrite (LED, HIGH); // LED ON
  state = "ON";
 }
 else
 {
  digitalWrite (LED, BAIXO); // LED OFF
  state = "OFF";
 }
 
 server.send (200, "texto / plano", estado);
}

configuração de vazio (vazio)
{
  Serial.begin (115200);
  WiFi.begin (ssid, senha);
  Serial.println ("");
  pinMode (LED, SAÍDA); 
  
  while (WiFi.status ()! = WL_CONNECTED)
  {
    Serial.print ("Conectando ...");
  }
  Serial.println ("");
  Serial.print ("Conectado a");
  Serial.println (ssid);
  Serial.print ("endereço IP:");
  Serial.println (WiFi.localIP ());
 
  server.on ("/", handleRoot);
  server.on ("/ led_set", led_control);
  server.on ("/ adcread", sensor_data);
  server.begin ();
}

loop void (void)
{
  server.handleClient ();
}

#include <WiFi.h>
#include <HTTPClient.h>
#include <MaxMatrix.h>
#include <Caracters.h>
#include <ConnectionHandler.h>

#define maxDisplays 4
#define data  14
#define load  26
#define clock 32

/* MODULE ID AND WIFI CONNECTION */
#define moduleId "eversong"
#define syncUrl  "http://behalten.com.br:9000/sync/"+moduleId
#define ssid "Proxy"
#define password "margaras13"
bool connected = false;

MaxMatrix Matrix(data, load, clock, maxDisplays);
ConnectionHandler connection(ssid, password);
HTTPClient http;


String askStatus(String syncUrlInput){  
  http.begin(syncUrlInput);
  int httpCode = http.GET();
	if (httpCode != 200){
		Serial.println(httpCode);
		connected = false;
    return String("");
	}
  String payload = http.getString();
  http.end();
  return payload;
}

void setup(){
  Serial.begin(9600);
  pinMode(BUILTIN_LED,OUTPUT);
	connection.connectToWifi();
  Matrix.init();  
  Matrix.setIntensity(3);
}
 
void loop(){   
  connection.applyReconectRoutine();
}
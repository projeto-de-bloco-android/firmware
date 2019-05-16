#include <ConnectionHandler.h>
#include <WiFi.h>

WiFiClient espClient;

bool connected = false;

void ConnectionHandler::connectToWifi(){
	WiFi.begin(ssid, password);
	while (WiFi.status() != WL_CONNECTED) {
		delay(500);
		Serial.print("Connecting to WiFi...[");
    Serial.print(WiFi.status());
    Serial.println("]");
		connected = true;
	}
	Serial.println("Connected");
}

void ConnectionHandler::applyReconectRoutine(){
    
}
#ifndef CONNECTION_HANDLERE
#define CONNECTION_HANDLERE

class ConnectionHandler{
private:
    const char* ssid;
    const char* password;
public:
    void connectToWifi();
    void applyReconectRoutine();
};


ConnectionHandler::ConnectionHandler(const char* ssid, const char* password){

}

#endif
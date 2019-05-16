#ifndef PAYLOAD_HANDLER
#define PAYLOAD_HANDLER

class PayloadHandler
{
private:
    const char* module_id;
    String beautifulSplit();
public:
    String askStatus();
  
};

PayloadHandler::PayloadHandler(/* args */){

}

PayloadHandler::~PayloadHandler()
{
}


#endif
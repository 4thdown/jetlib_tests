#include "jet/Hostname.h"
#include "jet/Utf8String.h"


using namespace jet;

class HostnameTest{


    public:
        void run(){

            Hostname hostname;

            hostname.setHost( Utf8String("www.altumo.com") );
            hostname.getHost();


        }
};


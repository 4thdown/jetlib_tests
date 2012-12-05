#include "jet/TcpConnection.h"


using namespace jet;

class TcpConnectionTest{


    public:
        void run(){

            TcpConnection tcpconnection;

            tcpconnection.setDestinationEndpoint( destination_endpoint );
            tcpconnection.getDestinationEndpoint();


            tcpconnection.setSourceEndpoint( source_endpoint );
            tcpconnection.getSourceEndpoint();


            tcpconnection.setState( state );
            tcpconnection.getState();


        }
};


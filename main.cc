#include "FileTest.h"
#include "DirectoryTest.h"

#include "Utf8StringTest.h"
#include "Utf8CharacterTest.h"

#include "HostnameTest.h"
#include "HttpClientTest.h"
#include "HttpHeaderTest.h"
#include "HttpRequestTest.h"
#include "HttpResponseTest.h"
#include "HttpServerTest.h"
#include "IpAddressTest.h"
#include "TcpClientTest.h"
#include "TcpEndpointTest.h"
#include "TcpServerTest.h"

#include "Int16Test.h"
#include "Int32Test.h"
#include "Int64Test.h"
#include "Int8Test.h"
#include "UnsignedInt16Test.h"
#include "UnsignedInt32Test.h"
#include "UnsignedInt64Test.h"
#include "UnsignedInt8Test.h"

#include "jet/Exception.h"

using namespace jet;

void red( Utf8String text ){

    cout << "\033[1;31m" << text << "\033[0m";

}


int main( int, char ** ){

    try{

        Utf8StringTest utf8_string_test;
        utf8_string_test.run();

        Utf8CharacterTest utf8_character_test;
        utf8_character_test.run();

        DirectoryTest directory_test;
        directory_test.run();

        FileTest file_test;
        file_test.run();


        HostnameTest Hostname_test;
        Hostname_test.run();

        HttpClientTest HttpClient_test;
        HttpClient_test.run();

        HttpHeaderTest HttpHeader_test;
        HttpHeader_test.run();

        HttpRequestTest HttpRequest_test;
        HttpRequest_test.run();

        HttpResponseTest HttpResponse_test;
        HttpResponse_test.run();

        HttpServerTest HttpServer_test;
        HttpServer_test.run();

        IpAddressTest IpAddress_test;
        IpAddress_test.run();

        TcpClientTest TcpClient_test;
        TcpClient_test.run();

        TcpEndpointTest TcpEndpoint_test;
        TcpEndpoint_test.run();

        TcpServerTest TcpServer_test;
        TcpServer_test.run();




        Int16Test Int16_test;
        Int16_test.run();

        Int32Test Int32_test;
        Int32_test.run();

        Int64Test Int64_test;
        Int64_test.run();

        Int8Test Int8_test;
        Int8_test.run();

        UnsignedInt16Test UnsignedInt16_test;
        UnsignedInt16_test.run();

        UnsignedInt32Test UnsignedInt32_test;
        UnsignedInt32_test.run();

        UnsignedInt64Test UnsignedInt64_test;
        UnsignedInt64_test.run();

        UnsignedInt8Test UnsignedInt8_test;
        UnsignedInt8_test.run();


    }catch( jet::Exception *e ){

        red( Utf8String("[Exception] ") );
        cout << "- " << e->message << endl;

    }

    return 1;

}

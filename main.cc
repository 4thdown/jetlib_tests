#include "FileTest.h"
#include "DirectoryTest.h"
#include "Utf8StringTest.h"
#include "Utf8CharacterTest.h"

#include "jet/Exception.h"

using namespace jet;

void red( Utf8String text ){

    cout << "\033[1;31m" << text << "\033[0m";

}


int main( int, char ** ){

    //FileTest file_test;
    //file_test.run();

    try{

        Utf8StringTest utf8_string_test;
        utf8_string_test.run();

        Utf8CharacterTest utf8_character_test;
        utf8_character_test.run();

        DirectoryTest directory_test;
        directory_test.run();

    }catch( jet::Exception *e ){

        red( Utf8String("[Exception] ") );
        cout << "- " << e->message << endl;

    }

    return 1;

}

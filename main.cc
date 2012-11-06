#include "FileTest.h"
#include "Utf8StringTest.h"
#include "Utf8CharacterTest.h"

using namespace jet;

int main( int, char ** ){

    //FileTest file_test;
    //file_test.run();

    Utf8StringTest utf8_string_test;
    utf8_string_test.run();

    Utf8CharacterTest utf8_character_test;
    utf8_character_test.run();

    return 1;

}

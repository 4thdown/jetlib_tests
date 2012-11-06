#include "jet/Utf8Character.h"

#include <iostream>
#include <utility>

using namespace jet;
using namespace std;

class Utf8CharacterTest{

    public:
        void run(){

            Utf8Character new_character( "a" );

            cout << "a: " << new_character.getAsciiCharacter() << endl;

            //test the print as binary friend function
            cout << "Output should be 01100001000000000000000000000000 ";
            print_as_binary( cout, new_character );
            cout << endl;


            //test the print as binary friend function
            cout << "Output should be 01100001 ";
            print_as_binary( cout, new_character.getAsciiCharacter() );
            cout << endl;

        }

};



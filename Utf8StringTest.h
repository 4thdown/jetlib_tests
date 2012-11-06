#include "jet/Utf8String.h"

#include <iostream>
#include <utility>

using namespace jet;
using namespace std;

class Utf8StringTest{

    public:
        void run(){

            Utf8String my_string( "asfsdf", 6 );
            cout << "Size should be 6: " << my_string.getSize() << endl;

            Utf8String string_a( "111sdfasdfasdfsd2", 17 );
            cout << "Size should be 17: " << string_a.getSize() << endl;

            //assignment
            string_a = my_string;
            cout << "Size should be 6: " << string_a.getSize() << endl;
            cout << "Size should be 6: " << my_string.getSize() << endl;

            Utf8String string_c( "asfsdfasdfasdfsd", 16 );
            string_a = std::move( string_c );
            cout << "Size should be 16: " << string_a.getSize() << endl;
            cout << "Size should be 0: " << string_c.getSize() << endl;

            //self assignment
            string_a = string_a;
            cout << "Size should be 16: " << string_a.getSize() << endl;

            // += concatenator operator (left side empty)
            Utf8String new_string;
            new_string += my_string;
            cout << "Size should be 6: " << new_string.getSize() << endl;

            // += concatenator operator (right side empty)
            Utf8String new_string3;
            new_string += new_string3;
            cout << "Size should be 6: " << new_string.getSize() << endl;

            // += concatenator operator (neither side empty)
            Utf8String new_string4( "123456789", 9 );
            new_string += new_string4;
            cout << "Size should be 15: " << new_string.getSize() << endl;


            // + concatenator operator (neither side empty) w/ assignment
            new_string = string_a + new_string4;
            cout << "Size should be 25: " << new_string.getSize() << endl;


            //concatenator operator 2
            //Utf8String new_string2 = string_a + my_string + new_string;
            //cout << "Size should be 44: " << new_string2.getSize() << endl;

            //ostream << operator
            cout << new_string << endl;

            //ostream << operator with + operator
            cout << Utf8String("hello",5) + Utf8String(" world",6) << endl;


            //ostream << operator with << operator
            cout << Utf8String("hello",5) << Utf8String(" world",6) << endl;


            //test the print as binary friend function (and the character constructor)
            cout << "Output should be 01100001 ";
            print_as_binary( cout, Utf8String('a') );
            cout << endl;


            cout << "Output should be e " << Utf8String("hello",5).getAsciiCharacterAtIndex( 1 ) << endl;


        }

};



#include "jet/Utf8String.h"

#include <iostream>
#include <utility>
#include <vector>

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

            // += concatenator operator with char *
            Utf8String new_string5( "123456789", 9 );
            new_string5 += "0abcdef";
            cout << "Should be 1234567890abcdef: " << new_string5 << endl;

            // + concatenator operator with char *
            new_string5 = Utf8String("123") + "abc";
            cout << "Should be 123abc: " << new_string5 << endl;


            new_string5 = "abc" + Utf8String("123");
            cout << "Should be abc123: " << new_string5 << endl;

            new_string5 = "abc" += Utf8String("123q");
            cout << "Should be abc123q: " << new_string5 << endl;


            Utf8String shell_argument_example( "I'm a little teapot." );
            cout << "Should be 'I\'\\\'\'m a little teapot.': " << shell_argument_example.escapeShellArgument() << endl;

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
            cout << "Output should be 0110000100000000 ";
            print_as_binary( cout, Utf8String('a') );
            cout << endl;

            //test the print as hex friend function
            cout << "Output should be 68656C6C6F6100 ";
            print_as_hex( cout, Utf8String("helloa") );
            cout << endl;


            cout << "Output should be e " << Utf8String("hello",5).getAsciiCharacterAtIndex( 1 ) << endl;


            const char test_character = 'a';

            Utf8String my_super_string( "hello" );
            cout << "Output should be a " << Utf8String(test_character) << endl;
            cout << "Output should be aa " << Utf8String(test_character) + test_character << endl;
            my_super_string += test_character;
            cout << "Output should be helloa " << my_super_string << endl;

            cout << "Output should be Hello9ThereBilly " << Utf8String("hello9_there_billy").toCamelCase() << endl;
            cout << "Output should be 9helloThereBilly " << Utf8String("9hello_there_billy").toCamelCase() << endl;

            cout << "Output should be i'm lower case " << Utf8String("I'm Lower Case").toLowerCase() << endl;
            cout << "Output should be I'M UPPER CASE " << Utf8String("I'm Upper Case").toUpperCase() << endl;

            //string concatenation chaining with the + operator
            cout << "Output should be abcdef " << Utf8String("a") + Utf8String("bc") + Utf8String("d") + Utf8String("ef") << endl;


            std::vector<Utf8String> list = Utf8String("hello9_there_billy").split( '_' );
            cout << "Output should be there " << list[1] << endl;
            cout << "Output should be billy " << list[2] << endl;
            cout << "Output should be 3 " << list.size() << endl;


            Utf8String number( 5 );
            cout << "Output should be 5 " << number << endl;

            Utf8String number2( 0 );
            cout << "Output should be 0 " << number2 << endl;


            //String join
            cout << "Output should be 1,2,3,4 " << Utf8String(",").join( {"1","2","3","4"} ) << endl;


            //Underscore case
            cout << "Output should be what_is_my_name " << Utf8String("WhatIsMyName").toUnderscoreCase() << endl;
            cout << "Output should be what_is_my_name " << Utf8String("What is My name").toUnderscoreCase() << endl;
            cout << "Output should be what_is_my_name " << Utf8String("What is my name").toUnderscoreCase() << endl;
            cout << "Output should be what_is_my_name " << Utf8String("what    is    my   name").toUnderscoreCase() << endl;
            cout << "Output should be what_is_my_name " << Utf8String("what-is--my-Name").toUnderscoreCase() << endl;


        }

};



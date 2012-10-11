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

            //Utf8String string_c( "asfsdfasdfasdfsd", 16 );
            //string_a = std::move( string_c );
            //cout << "Size should be 16: " << string_a.getSize() << endl;
            //cout << "Size should be 0: " << string_c.getSize() << endl;


        }

};



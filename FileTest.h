#include "jet/File.h"

using namespace jet;

class FileTest{

    public:
        void run(){

            File my_file( "./my_file.txt" );
            my_file.write( "Hello" );

        }

};



#include "jet/Utf8String.h"
#include "jet/Directory.h"

#include <iostream>
#include <utility>

#include <vector>


using namespace jet;
using namespace std;

class DirectoryTest{

    public:
        void run(){

            Directory dir( "/tmp" );
            vector<File*>* files = dir.getFiles();
            vector<File*>::iterator it;
            cout << "Files:" << endl;
            for( it = files->begin(); it != files->end(); it++ ){
                cout << (*it)->getFilename() << endl;
            }
            delete files;

            Directory current_directory;
            vector<Directory*>* directories = current_directory.getDirectories();
            vector<Directory*>::iterator directory_iterator;
            cout << "Directories:" << endl;
            for( directory_iterator = directories->begin(); directory_iterator != directories->end(); directory_iterator++ ){
                cout << (*directory_iterator)->getName() << endl;
            }
            delete directories;


        }

};



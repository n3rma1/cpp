#include <iostream>
#include <fstream>
using namespace std;
int main(){
    // creation of ofstream class object
    ofstream outputFile;
    
    string line;

    // by defualt ios::out mode, automatically deletes
    // the content of file. To append the content,
    // open in ios::app mode
    // outputFile.open("sample.txt");

    outputFile.open("sample.txt");

    while(outputFile){
        getline(cin,line);

        if(line == "-1")
            break;

        // write line in file
        outputFile << line << endl;  // just like cout
    } 

    // closing file
    outputFile.close();

    // creation of ifstream class object to read the file
    ifstream inputFile;

    // by defualt open mode = ios::in mode
    inputFile.open("sample.txt");

    while(getline(inputFile,line)){

        // print line (read from file) in console
        cout << line << endl;
    }

    inputFile.close();

    return 0;
}
// while opening a file, we can open file in more than one mode as
// fstream mystream ("filedata", ios::in | ios::out);

    // file opened in input or output mode


#include <iostream>
#include <fstream>
using namespace std;
int main(){
    // creation of ofstream class object
    ofstream outputFile;
    
    string line;

    // by default ios::out mode, automatically deletes
    // the content of file. To append the content,
    // open in ios::app mode
    // outputFile.open("sample.txt");

    outputFile.open("sample.txt");

    while(outputFile){
        cin >> line;

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

    while(!inputFile.eof()){

        // print line (read from file) in console
        inputFile >> line;
        cout << line << endl;
    }

    inputFile.close();

    return 0;
}
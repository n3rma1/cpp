#include <iostream>
#include <fstream>
using namespace std;
int main(){
    // creation of ofstream class object
    ofstream fout;
    
    string line;

    // by defualt ios::out mode, automatically deletes
    // the content of file. To append the content,
    // open in ios::app mode
    // fout.open("sample.txt");

    fout.open("sample.txt");

    while(fout){
        getline(cin,line);

        if(line == "-1")
            break;

        // write line in file
        fout << line << endl;  // just like cout
    } 

    // closing file
    fout.close();

    // creation of ifstream class object to read the file
    ifstream fin;

    // by defualt open mode = ios::in mode
    fin.open("sample.txt");

    while(getline(fin,line)){

        // print line (read from file) in console
        cout << line << endl;
    }

    fin.close();

    return 0;
}
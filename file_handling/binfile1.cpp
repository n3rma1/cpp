// read and write in binary format
// need to cast into character pointer for everything except char itself

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    unsigned short a = 1234;

    // writing to file
    ofstream fout ("random.dat", ios::binary);
    if(fout){
    fout.write(reinterpret_cast<char*>(&a), sizeof(unsigned short));
    }else
        cout << "error opening file\n";
    fout.close();


    // reading from file
    ifstream fin ("random.dat", ios::binary);
    if(fin){
        unsigned short b;
        fin.read(reinterpret_cast<char*>(&b), sizeof(unsigned short));
        cout << b << endl;
    }
    fin.close();

    // for char variable

    ofstream fileout("random1.dat", ios::binary);
    char x = 'A';
    if(fileout){
        fileout.write(&x, sizeof(char));
        fileout.close();
    }else   
        cout << "error opening file\n";
    
    ifstream filein("random1.dat", ios::binary);
    if(filein){
        char y = 0;
        filein.read(&y, sizeof(char));
        filein.close();
        cout << y ;
    }else   
        cout << "error opening file\n";
    return 0;
}
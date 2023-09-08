// WA C++ file handling program to read data from the file called student.txt

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int rno, fee;
    char name[40];

    ifstream fin;
    fin.open("student.doc");
    fin >> rno >> name >> fee;

    fin.close();

    cout << endl << rno << "\t" << name <<"\t" << fee;

    return 0;
}

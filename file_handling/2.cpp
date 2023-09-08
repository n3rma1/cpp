
//write a single file handling program in c++ to reading and writing data on a file.


#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int rno,fee;
    char name[40];

    cout << "Enter the Roll no.: ";
    cin >> rno;

    cout << "Enter the Name: ";
    cin >> name;

    cout << "Enter fee : ";
    cin >> fee;

    ofstream fout;
    fout.open("2student.doc");

    fout << rno <<"\t" << name << "\t" << fee;   // write data to the file student
    fout.close();

    ifstream fin;
    fin.open("2student.doc");
    
    fin >> rno >> name >> fee;  //just like cin

    fin.close();

    cout << endl << rno << "\t" << name << "\t" << fee;

    return 0;
}
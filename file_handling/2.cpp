
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

    cin >> fee;

    ofstream fout ("2student.doc");       // opens a file name 2student.doc for writting
                                            // It creates 'fout' as the object of the class ofstream and 
                                            // binds it to the file "2student.doc" for writting

    fout << rno <<"\t" << name << "\t" << fee;   // write data to the file student
    fout.close();
    ifstream fin ("2student.doc");         // opens a file named '2student.doc' for input/reading.  
                                        // It creates 'fin' as the object of the class ifstream that manages
                                        // the input stream and binds it to the disk file '2student.doc' for input
    
    fin >> rno >> name >> fee;  //just like cin

    fin.close();

    cout << endl << rno << "\t" << name << "\t" << fee;

    return 0;
}
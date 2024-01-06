// read/write records in binary format

// go yo binfile4.cpp for array of Records

#include <iostream>
#include <fstream>
using namespace std;

struct Record
{
  char name[20];
  unsigned short age;
  int crn;
};

int main(){
  ofstream fout("records.dat", ios::binary);
  Record rec{"nandy", 18, 1};
  if(fout){
    fout.write(reinterpret_cast<char*>(&rec), sizeof(Record));
    fout.close();
  }else
    cout << "error\n";
  
  // reading

  ifstream fin("records.dat", ios::binary);
  if(fin){
    Record rec1;
    fin.read(reinterpret_cast<char*>(&rec1), sizeof(Record));
    fin.close();
    cout << rec1.name <<'\n' << rec1.age <<'\n' << rec1.crn << endl;
  }else 
    cout << "error\n";
}
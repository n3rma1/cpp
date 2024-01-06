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

  Record rec[3] = {{"Tom", 11, 1}, {"John", 12, 2}, {"Joe", 14, 3}};

  ofstream fout("records.dat", ios::binary);
  if(fout){
    fout.write(reinterpret_cast<char*>(&rec), 3 * sizeof(Record));
    fout.close();
  }else 
    cout << "error\n";

  

  // reading 

  ifstream fin("records.dat", ios::binary);
  if(fin){
    Record rec1[3];
    fin.read(reinterpret_cast<char*>(&rec1), 3 * sizeof(Record));
    fin.close();
    for(auto r : rec1){
      cout << r.name << '\t' << r.age << '\t' << r.crn << endl;
    }
  }else
    cout <<"error\n";
  return 0;
}
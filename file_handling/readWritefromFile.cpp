#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  ofstream fout ("random.txt");
  string line;
  while(fout){
    getline(cin, line);
    if(line == "-1"){
        break;
    }
    fout << line << endl;

  }
  fout.close();


  ifstream fin("random.txt");
  while(fin){
    getline(fin, line);
    cout << line << endl;
  }
}
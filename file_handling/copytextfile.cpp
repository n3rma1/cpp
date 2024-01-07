#include<iostream>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;

int main(){
  ifstream fin("source.txt");
  ofstream fout("destination.txt");
  string line;
  while(getline(fin, line)){
    fout << line << endl;
  }
  fin.close();
  fout.close();
}
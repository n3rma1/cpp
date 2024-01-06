#include <iostream>
using namespace std;
#include <fstream>
#include <string>

int main(){
  string line;
  cout << "enter string and enter '%' if you are done: ";
  getline(cin, line, '%');  // '%' is delimiter if not mentioned will take a line only
  cout << line;
}
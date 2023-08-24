#include <iostream>
#include <string.h>
using namespace std;

void concat(string s1, string s2){
      //appending the string append()
    cout << "Using append() function: ";
    s1.append(s2);
    cout << s1 << endl;
}
void concat1(string s1, string s2){
    cout << "using + operator: ";
    s1 = s1 + s2;
    cout << s1 << endl;
}

int main() {
    string s1 {"This string is "};
    string s2 {"added"};
    concat(s1,s2);
    concat1(s1,s2);
    
    return 0;
}
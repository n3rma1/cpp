#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 {"Cool"};
    // substr(size_t position , size_t len)
    // substr ( from which index? , how many? )

    string s = s1.substr(1,3);
    cout << s;
    cout << endl;
    string s2 = "dog:cat";

    //find the position of ':' using find()
    int pos = s2.find(":");

    // copy substring after pos
    string sub = s2.substr(pos + 1);

    cout << "String is: " << sub;
    cout << endl;
    //copy substring before pos
    string sub2 = s2.substr(0,pos);
    cout << "String is : " << sub2;
    return 0;
}
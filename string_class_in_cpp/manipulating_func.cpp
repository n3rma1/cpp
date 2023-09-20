
/*
    manipulating function in c++ string class   
    copy("char array" , len, position) :- This function copies the substring in target character array mentioned in its arguments. 
    It takes 3 arguments, target char array, length to be copied and starting position in string to start copying.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){

    string str1 = "string class in cpp";
    string str2 = "manipulating functions";

    // using copy() to copy elements into another string
    // copies "string class in cpp" into str2
    cout << "***Using copy() manipulator***\n";
    cout << "Using  str1.copy(ch,6,0)\n";
    char ch[100];

    str1.copy(ch,6,0);
    cout << "The new copied character array is : " << ch << endl;

    cout << "\n***Using swap() manipulator***\n";
    // using swap() to swap string
    cout << "The 1st string before swapping is : " << str1 << endl;
    cout << "The 2nd string before swapping is : " << str2 << endl;

    str1.swap(str2);

    cout << "The 1st string after swapping is : " << str1 << endl;
    cout << "The 2nd string after swapping is : " << str2 << endl;

}
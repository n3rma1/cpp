// iterator function in cpp
// to demonstrate the working of begin(), end(), rbegin(), rend(), cbegin(), cend(),crbegin(), crend()

#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "string class in cpp";

    // using begin() to print string from begining
    cout << "The string using begin() is : ";
    for (auto it = str.begin(); it != str.end(); it++)
    {
        cout << *it;
    }
    

    // using rbegin() to print string from reverse begining
    cout << "\nThe string using rbegin() is : ";
    for(auto it = str.rbegin(); it != str.rend(); it++){
        cout << *it;
    }

    // using rend() to print string from reverse end
    cout << "\nThe string using rend() is : ";
    for(auto it = str.rend(); it != str.rbegin(); it--){
        cout << *it;
    }

    // using cbegin() to print string from begining
    cout << "\nThe string using cbegin() is : ";
    for(auto it = str.cbegin(); it  != str.cend(); it++){
        cout << *it;
    }
    // what is the difference between cbegin() and begin()?
    // cbegin() returns a const_iterator and begin() returns an iterator

    // in which condition should i use cbegin() or begin()?
    // if you want to modify the string, use begin()
    // if you don't want to modify the string, use cbegin()

    // demonstrate using example
    cout << "\n\n****Demonstrating the difference between begin() and cbegin()****";
    cout << "\n\nUsing begin()";
    for(auto it = str.begin(); it != str.end(); it++){
        *it = toupper(*it);
    }
    cout << "\nThe string after using begin() is : " << str;

    cout << "\n\nUsing cbegin()";
    for(auto it = str.cbegin(); it != str.cend(); it++){
        //*it = tolower(*it); // this will give an error
    }
    cout << "\nThe string after using cbegin() is : " << str;
    cout << "\n\n*****End of demonstration*****\n\n";

    // using crbegin() to print string from reverse begining
    cout << "\nThe string using crbegin() is : ";
    for(auto it = str.crbegin(); it != str.crend(); it++){
        cout << *it;
    }

    // using crend() to print string from reverse end
    cout << "\nThe string using crend() is : ";
    for(auto it = str.crend(); it != str.crbegin(); it--){
        cout << *it;
    }

    
    return 0;
}
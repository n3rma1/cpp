// capacity functions in cpp string class

#include <iostream>
using namespace std;

int main(){
    string str = "string class in cpp";

    cout << "The initial string is : ";
    cout << str << endl;

    // resizing string using resize()
    str.resize(12);

    cout << "The string after resize operation is : ";
    cout << str << endl;

    // displaying capacity of string
    cout << "The capacity of string is : ";
    cout << str.capacity() << endl;

    //displaying length of string
    cout << "The length of string is : " << str.length() << endl;

    // decreasing the capacity of string
    // using shrink_to_fit()
    str.shrink_to_fit();

    // displaying capacity of string
    cout << "The new capacity after shrinking is : ";
    cout << str.capacity() << endl;
    cout << "The string after shrinking is : " << str << endl;

    // using reserve() to increase capacity
    // increases capacity to 100
    str.reserve(100);

    // displaying capacity of string
    cout << "The new capacity after reserving is : ";
    cout << str.capacity() << endl;

    // displaying length of string
    cout << "The  after reserving is : " << str << endl;

    
}
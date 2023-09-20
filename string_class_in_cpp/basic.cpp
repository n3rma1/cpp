// basic string operations in cpp

#include <iostream>
using namespace std;
int main(){

    // declaring string
    string str;

    // taking input using getline() function
    getline(cin,str);

    // displaying string    
    cout << "The initial string is : "; 
    cout << str << endl;

    // using push_back() to insert a character at end
    // pushes 's' in this case
    str.push_back('s');

    // displaying string
    cout << "The string after push_back operation is : ";
    cout << str << endl;

    // using pop_back() to delete a character from end
    // pops 's' in this case
    str.pop_back();
    cout << "The string after pop_back operation is : ";
    cout << str << endl;

    // using insert() to insert string at particular position
    // inserts "for" at 8th position in this case
    str.insert(8,"for");
    cout << "The string after insert operation is : ";
    cout << str << endl;

    // using replace() to replace substring with some other string
    // replaces "for" with "that" in this case
    str.replace(8,3,"that");
    cout << "The string after replace operation is : ";
    cout << str << endl;

    // using erase() to erase characters from a given position
    // deletes 5 characters from 6th index
    str.erase(6,5);
    cout << "The string after erase operation is : ";
    cout << str << endl;



}
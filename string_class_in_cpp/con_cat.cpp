// string concatenation using append() function and '+' opeartor

#include <iostream>
#include <string>
using namespace std;

int main(){

    // using append() function
    cout << "\n\n***Using append() function***\n\n";
    string init("This is");
    string add(" so good");
    cout << "Before appending: " << init << endl;

    // appending the string
    init.append(add);
    cout << "After appending: " << init << endl;

    cout << "\n\n***Using '+' operator***\n\n";
    init = "This is";
    add = " so good";
    string new_string = init + add;
    cout << "initial string: " << init;
    cout << "to be added string: " << add;
    cout << "After using '+' : " << new_string << endl;

    return 0;
}
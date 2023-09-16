// enums are the user defined data types that consists of paired
// name-integer constant.
// great if you have set of potential options

#include <iostream>

using namespace std;

enum Day {
    sunday, monday, tuesday, wednesday, thursday, friday, saturday
};
// by default index starts from 0 so sunday = 0
int main(){

    Day today = sunday;

    switch (today)
    {
    case 0 : cout << "It's sunday!\n";                       // can also change the corresponding integer value instead string
                    break;
    case monday : cout << "It's monday!\n";
                    break;

    case tuesday : cout << "It's tuesday!\n";
                    break;

    case wednesday : cout << "It's wednesday!\n";
                    break;

    case thursday : cout << "It's thursday!\n";
                    break;

    case friday : cout << "It's friday!\n";
                    break;                
    
    case saturday : cout << "It's saturday!\n";
                    break;
    
    default: cout << "Invalid day!";
                    break;
    }
}
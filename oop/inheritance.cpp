#include <iostream>
using namespace std;

class Person{
    int id;
    char name[100];

public:
    void set_p(){
        cout << "Enter the id: ";
        cin >> id;
        cout << "Enter the Name: ";
        cin >> name;
    }

    void display_p(){
        cout << endl << "id: "<< id << "\nName: " << name << endl;
    }
};

// when a base class is privately inherited by the derived class, public
// members of the base class becomes the private members of the drived class
// and therefore, the public member of base class can only be accessed by
// the member functions of the derived class.

class Student : private Person{
    char course[50];
    int fee;

    public:
        void set_s(){
            set_p();
            cout << "Enter the course name: ";
            cin >> course;
            cout << "Enter the course fee: ";
            cin >> fee;
        }

        void display_s(){
            display_p();
            cout << "Course: " <<course << "\nFee: " << fee << endl;

        }
};

int main(){
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}
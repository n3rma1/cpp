#include <iostream>
using namespace std;

class student {
public:
    static int total;
    
    student() {
        total += 1;
    }
};

// Define the static member variable outside the class
int student::total = 0;

int main() {
    student s1;
    cout << "Number of students: " << s1.total << endl;
    student s2;
    cout << "Number of students: " << s2.total << endl;
    student s3;
    cout << "Number of students: " << s3.total << endl;
}

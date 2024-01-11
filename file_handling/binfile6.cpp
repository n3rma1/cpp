#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class Student {
    char name[20];
    int roll;

public:
    void get() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Roll: ";
        cin >> roll;
    }

    void put() const {
        cout << name << setw(5) << roll << endl;
    }

    int getRoll() const {
        return roll;
    }
};

int main() {
    Student s;

    char filename[20], ch;
    ofstream fout;
    ifstream fin;

    cout << endl << "1. Create new file" << endl
         << "2. Append file" << endl
         << "3. Update file" << endl
         << "4. Display file" << endl
         << "5. Search file" << endl;

    do {
        cout << "Enter choice: ";
        int a;
        cin >> a;

        switch (a) {
            case 1:// create
                cout << "Enter filename: ";
                cin >> filename;
                fout.open(filename, ios::binary);
                if (fout) {
                    s.get();
                    fout.write(reinterpret_cast<char*>(&s), sizeof(Student));
                    fout.close();
                } else {
                    cout << "Error opening file for writing." << endl;
                }
                break;

            case 2: // append
                fout.open(filename, ios::app | ios::binary);
                if (fout) {
                    s.get();
                    fout.write(reinterpret_cast<char*>(&s), sizeof(Student));
                    fout.close();
                } else {
                    cout << "Error opening file for appending." << endl;
                }
                break;

            case 3: //update
                fout.open(filename, ios::binary | ios::in | ios::out);
                if (fout) {
                    cout << "Enter object to be updated: ";
                    int obj;
                    cin >> obj;
                    int location = (obj - 1) * sizeof(s);
                    fout.seekp(location, ios::beg);
                    s.get();
                    fout.write(reinterpret_cast<char*>(&s), sizeof(s));
                    fout.close();
                } else {
                    cout << "Error opening file for updating." << endl;
                }
                break;

            case 4: //display
                fin.open(filename, ios::binary);
                if (fin) {
                    fin.seekg(0, ios::beg);
                    fin.read(reinterpret_cast<char*>(&s), sizeof(s));
                    while (fin) {
                        s.put();
                        fin.read(reinterpret_cast<char*>(&s), sizeof(s));
                    }
                    fin.close();
                } else {
                    cout << "Error opening file for reading." << endl;
                }
                break;

            case 5: //search
                fin.open(filename, ios::binary);
                if (fin) {
                    int r;
                    cout << "Enter the roll no. to be searched: ";
                    cin >> r;
                    fin.read(reinterpret_cast<char*>(&s), sizeof(s));
                    while (fin) {
                        if (r == s.getRoll()) {
                            s.put();
                        }
                        fin.read(reinterpret_cast<char*>(&s), sizeof(s));
                    }
                    fin.close();
                } else {
                    cout << "Error opening file for searching." << endl;
                }
                break;

            default:
                cout << "Enter valid choice." << endl;
                break;
        }

        cout << "Do you want to continue? (y/n) ";
        cin >> ch;
    } while (ch != 'n');

    return 0;
}

#include<iostream>
#include<fstream>
#include<string>

class Student {
private:
    std::string name;
    int rollno;

public:
    void readData() {
        std::cout << "\nEnter name: ";
        std::cin.ignore(); // Clear the newline character from the previous input
        std::getline(std::cin, name);
        std::cout << "Enter rollno: ";
        std::cin >> rollno;
        std::cout << std::endl;
    }

    void showData() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll no: " << rollno << std::endl;
    }

    bool writeToFile(std::ofstream& outfile) const {
        if (outfile.is_open()) {
            outfile.write(reinterpret_cast<const char*>(this), sizeof(*this));
            return true;
        }
        return false;
    }

    bool readFromFile(std::ifstream& infile) {
        if (infile.is_open()) {
            if (infile.read(reinterpret_cast<char*>(this), sizeof(*this))) {
                return true;
            }
        }
        return false;
    }
};

void writeToFile() {
    Student s;
    s.readData();
    std::ofstream outfile("record.dat", std::ios::binary | std::ios::app);

    if (s.writeToFile(outfile)) {
        std::cout << "Record written to file successfully." << std::endl;
    } else {
        std::cerr << "Error writing record to file." << std::endl;
    }
}

void readFromFile() {
    Student s;
    std::cout << "\n***Data from file***" << std::endl;

    std::ifstream infile("record.dat", std::ios::binary);
    if (!infile.is_open()) {
        std::cerr << "Error opening file for reading." << std::endl;
        return;
    }

    while (s.readFromFile(infile)) {
        s.showData();
    }

    infile.close();
}

int main() {
    int choice;
    std::cout << "***Student Record System***" << std::endl;
    std::cout << "Select one option below" << std::endl;
    std::cout << "\t1 ---> Write Records to file" << std::endl;
    std::cout << "\t2 ---> Read From File" << std::endl;
    std::cout << "\t3 ---> Exit From Program" << std::endl;

    while (true) {
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                exit(0);
                break;
            default:
                std::cerr << "Choice not available" << std::endl;
                break;
        }
    }
    return 0;
}

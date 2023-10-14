// aggregation -> weak bonding between classes
#include <iostream>
#include <vector>

class Department {
public:
    Department(const std::string& name) : name(name) { }

    void printInfo() {
        std::cout << "Department: " << name << std::endl;
    }

private:
    std::string name;
};

class University {
private:
    std::vector<Department*> departments; // Aggregation

public:
    void addDepartment(Department* department) {
        departments.push_back(department);
    }

    void printDepartments() {
        for (Department* department : departments) {
            department->printInfo();
        }
    }
};

int main() {
    Department computerScience("Computer Science");
    Department physics("Physics");

    University myUniversity;
    myUniversity.addDepartment(&computerScience);
    myUniversity.addDepartment(&physics);

    myUniversity.printDepartments();

    // Departments can exist independently and are not destroyed when the University is destroyed.
    return 0;
}

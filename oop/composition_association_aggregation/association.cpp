#include <iostream>
#include <vector>

class Student {
public:
    Student(const std::string& name) : name(name) { }

    void study() {
        std::cout << name << " is studying." << std::endl;
    }

private:
    std::string name;
};

class Teacher {
public:
    Teacher(const std::string& name) : name(name) { }

    void teach() {
        std::cout << name << " is teaching." << std::endl;
    }

private:
    std::string name;
};

class Classroom {
private:
    std::vector<Student*> students; // Association
    Teacher* teacher; // Association

public:
    void addStudent(Student* student) {
        students.push_back(student);
    }

    void assignTeacher(Teacher* teacher) {
        this->teacher = teacher;
    }

    void conductClass() {
        if (teacher != nullptr) {
            teacher->teach();
        }
        for (Student* student : students) {
            student->study();
        }
    }
};

int main() {
    Teacher myTeacher("Mr. Smith");
    Student student1("Alice");
    Student student2("Bob");

    Classroom myClassroom;
    myClassroom.assignTeacher(&myTeacher);
    myClassroom.addStudent(&student1);
    myClassroom.addStudent(&student2);
    myClassroom.conductClass();
    // The Classroom is associated with a Teacher and Students, but it does not own them.
    return 0;
}

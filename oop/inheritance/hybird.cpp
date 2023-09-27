#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Mammal : public Animal {
public:
    void breathe() {
        cout << "Mammal is breathing" << endl;
    }
};

class Bird : public Animal {
public:
    void fly() {
        cout << "Bird is flying" << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void sleep() {
        cout << "Bat is sleeping" << endl;
    }
};

int main() {
    Bat bat;
    bat.Mammal::eat(); // calls Animal::eat()
    bat.breathe(); // calls Mammal::breathe()
    bat.fly(); // calls Bird::fly()
    bat.sleep(); // calls Bat::sleep()
    return 0;
}
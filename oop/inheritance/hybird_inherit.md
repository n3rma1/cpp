# Hybrid Inheritance

- Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance. 

## Example:

```
class Animal {
public:
    void eat() { /* ... */ }
};

class Bird : public Animal {
public:
    void fly() { /* ... */ }
};

class Mammal {
public:
    void run() { /* ... */ }
};

class Bat : public Bird, public Mammal {
public:
    // Bat can use eat(), fly(), and run() methods.
};

```
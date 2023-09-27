# Multipath Inheritance and Virtual Base Class

- A derived class with two base classes and these two base classes have one common base class is called multipath inheritance.

- This creates an ambiguity because the derived class doesn't know which version of the common base class's members to use.

```
class Animal {
public:
    void eat() { /* ... */ }
};

class Bird : public Animal {
public:
    void fly() { /* ... */ }
};

class Mammal : public Animal {
public:
    void run() { /* ... */ }
};

class Bat : public Bird, public Mammal {
public:
    // Error: Ambiguity - Bat doesn't know which 'eat()' to use from Animal.
};

```

<hr>

In this example, the ***Bat*** class inherits from both ***Bird*** and ***Mammal***, which in turn inherit from the common base class ***Animal***. When you try to call *eat()* in ***Bat***, it's ambiguous whether you're referring to the ***Animal*** class inherited through **Bird** or through ***Mammal***. This is the *diamond inheritance* problem.

To address the diamond inheritance problem, languages like C++ provide solutions such as **virtual inheritance**. Using virtual inheritance ensures that only one instance of the common base class is shared among the derived classes, resolving the ambiguity. Here's how it looks in C++:

```
class Animal {
public:
    void eat() { /* ... */ }
};

class Bird : virtual public Animal {
public:
    void fly() { /* ... */ }
};

class Mammal : virtual public Animal {
public:
    void run() { /* ... */ }
};

class Bat : public Bird, public Mammal {
public:
    // Now, Bat can use eat(), fly(), and run() methods without ambiguity.
};

```

<hr>

By adding the ***virtual*** keyword to the inheritance, we ensure that there's only one shared instance of ***Animal***, and the diamond inheritance problem is resolved. However, it's essential to use virtual inheritance carefully, as it can have implications on the order of constructor and destructor calls and should be used only when necessary to resolve ambiguity.
# Polymorphism

- Polymorphism only works with a pointer and reference types.

# Overriding

- In OOP when we allow a subclass or child class to provide a specific implementation of a method that is already provided by one of its superclasses or parent classes is known as **Function Overriding.**

## Advantages of Method Overriding

- The derived classes can give its own specific implementation to inherited methods without modifying the parent class methods.

- If a child class needs to use the parent class method it can use it, and other classes that want to have different implementation can use the overriding feature to make changes.

## Key Features of Overriding

- Overriding needs inheritance and there should be at least one derived class

- Derived class/es must have the same declaration, i.e., name, same parameters and same return type of the function as of the base class.

- function in derived class/es must have different implementation from each other.

- The method in the base class must need to be overridden in the derived class.

# Virtual Function

- A virtual function is a member function in a base class that is declared with the virtual keyword.
- It provides a default implementation in the base class that can be overridden in derived classes.
- Objects of derived classes can override the virtual function to provide their own specific implementations.
- A virtual function has an actual implementation in the base class, which can be called if needed.
- Virtual functions can have a body (implementation) in the base class.

```
Syntax:

class Base {
public:
    virtual void foo() {
        std::cout << "Base class implementation of foo()" << std::endl;
    }
};

class Derived : public Base {
public:
    void foo() override {
        std::cout << "Derived class implementation of foo()" << std::endl;
    }
};

```
Refer to [Virtual function implementation](virtual_func.cpp)

### Rules to follow to create a virtual function in c++

- The functions can't be static

- You derive them using the *virtual* keyword

- Virtual functions in C++ needs to be a member of some other class (base class)

- They can be a friend function of another class

- The prototype of these functions should be the same for both the base and derived class

- Virtual functions are accessible using object pointers

- Redefining the virtual function in the derived class is optional, but it nees to be defined in the base class

- The function call resolving is done at run time

- You can create a virutal destructor but not a constructor


## Pure Virtual Function

- A pure virtual function is a virtual function in a base class that is declared with the virtual keyword and set to zero using = 0 in the declaration.

- It does not have an implementation in the base class; it's meant to be overridden by derived classes.

- Classes that contain pure virtual functions are considered abstract classes, and you cannot create instances of them.

- Derived classes must provide an implementation for all pure virtual functions, making them concrete classes.

- Pure virtual functions define an interface that derived classes must adhere to.
Example:

```
class AbstractBase {
public:
    virtual void pureVirtualFunction() = 0;
};

class Derived : public AbstractBase {
public:
    void pureVirtualFunction() override {
        std::cout << "Derived class implementation of pureVirtualFunction()" << std::endl;
    }
};

```
## Difference between virtual function and pure virtual function
In summary, the key differences and importance of pure virtual functions vs. virtual functions are:

- Virtual functions provide a default implementation that can be overridden, while pure virtual functions do not provide an implementation in the base class.

- Pure virtual functions enforce derived classes to provide their own implementations, making them suitable for defining interfaces.

- Pure virtual functions help achieve abstract classes, ensuring that objects of the base class cannot be created.

- Virtual functions provide flexibility for both base and derived classes to use or override the implementation as needed.


```
Syntax:

virtual void func_name() = 0;

```
### Abstract Class

We can only make derived class’s objects to access their functions, and we will never want to instantiate objects of a base class, we call it an ***abstract*** class. Such a class exists only to act as a parent of derived classes that will be used to instantiate objects.

Refer to [Pure Virtual Function](pure_vir_func.cpp)
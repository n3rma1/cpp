# Multilevel Inheritance

- In multilevel inheritance, there is a chain of inheritance involving multiple classes, where each class serves as the base class for the next derived class.

- It creates a hierarchical structure where a class is derived from another class, and then another class is derived from it, forming a chain.

- This leads to a parent-child-grandchild relationship between classes.

- Each class in the hierarchy adds its own characteristics and behaviors to the classes below it.

- Multilevel inheritance can result in a deep inheritance hierarchy, which can sometimes be harder to manage and understand.

## Syntax:

```
class A {
    // ...
};

class B : public A {
    // ...
};

class C : public B {
    // ...
};

```
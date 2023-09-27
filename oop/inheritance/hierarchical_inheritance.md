# Hierarchical Inheritance

- In hierarchical inheritance, there is a single base class that serves as the parent for multiple derived classes.

- It creates a tree-like structure where one base class has multiple child classes, but those child classes do not derive from each other.

- Each derived class inherits the characteristics and behaviors of the same base class independently.

- Hierarchical inheritance is useful when you want to model a situation where multiple classes share common attributes or behaviors but have different additional features.

## Syntax:
```
class B : public A{
     
     // ...
};

class C : public A{

    // ...
};

class D : public A{

    // ...
};
```
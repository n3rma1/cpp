# What is Inheritance?

Inheritance is a technique of building new classes from the existing classes. It is a
technique of organizing information in a hierarchical form just like a child inheriting the features of its parents.

In the process of inhertiance the existing classes that are used to derive new classes are called base classes and the new classes derived from existing classes are called derived classes.

Syntax:
```
class <derived-class-name> : <access-specfier> <base-class-name{

    //body
}

```

Access specifier -> public, private, protected, If not selected by default private

> Note: A derive class doesn't inherit *access* to private data members. However it does inherit the full parent object, which contains any private members which that class declares

# Examples

```
class child : private parent{      // pirvate derivation
}

class child : public parent{     // public derivation
}

class child : protected parent{   // protected derivation
}

class child  : parent{           // no derivation by default private
}
```

# Note

> - When base class is privately inherited by the derived class, public members of base class becomes the private members of derived class and therefore, the public members of base class can only be accessed by the member functions of the derived class. They are inaccessible to the objects of the derived class.

> - On the other hand, when the base class is publicly inherited by the derived class, public members of the base class also become the public members of the derived class. Therefore, the public members of the base class are accessible by the objects of the derived class as well as by the member functions of the derived class.

# Access Specifier

1. Private: A private member is accessible only to member of the class in which they are declared. They are not visible in derived class or from outside of the class where they are declared except friend functions/classes

2. A private member of the base class can be accessed in the derived through the public member functions of the base class.

3. A protected member is accessible to members of its own and any of the members in a derived class or the friend or case or friend of derived class.

4. The members that might be used in derived class should be declared as protected rather than private.

5. A public member is accessible to members of its own class, member of derived class and even outside the class.


> In inheritance, when creating a derived class from existing base class the derived class is also a type of bsae class but the reverse is not true. If we create a derived class `car` from the base class `vehicle`, the `car` is a type of `vehicle` but `vehicle` is not a type of car. So object of `car` can be assigned to object of `vehicle` without the explicit conversion but the reverse is not ture.

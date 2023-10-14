# Compostion, Aggregation and Association
They have `HAS-A` relationship
<hr>
In object-oriented programming, composition, aggregation, and association are three different types of relationships between classes or objects. These relationships define how classes or objects are connected and interact with each other in a software system.

```
    Association has two forms:
    1. aggregation
    2. composition
```

1. Composition:

- Composition is a strong association relationship where one class (the whole or container) contains or is composed of another class (the part).

- The part class is often tightly coupled with the whole class and has no independent existence outside the whole.

- When the whole is destroyed, its parts are typically destroyed as well.
Composition is usually represented by a "has-a" relationship.

Example: A car has an engine, wheels, and seats. The car class contains objects of the engine, wheel, and seat classes.

```
class Engine { /* ... */ };

class Car {
private:
    Engine engine;
    // ...
};

```

2. Aggregation:

- Aggregation is a weaker association relationship where one class (the whole) has a reference to another class (the part), but the part can exist independently.

- The part class is not entirely dependent on the whole, and it can be shared among multiple wholes.

- When the whole is destroyed, the part may continue to exist.

- Aggregation is also represented by a "has-a" relationship but with weaker coupling.

Example: A university has departments. Departments can exist independently and can be part of multiple universities.

```
class Department { /* ... */ };

class University {
private:
    std::vector<Department> departments; // Aggregation
    // ...
};

```

3. Association:

- Association represents a more generic relationship between classes, where one class is related to another but not necessarily contained within it.

- The relationship can be weak or strong, and it may not imply ownership or dependency.

- It's often represented by a "uses" or "knows" relationship.

Example: A teacher is associated with a student in a classroom. The relationship doesn't imply ownership or containment.

```
class Student { /* ... */ };

class Teacher { /* ... */ };

class Classroom {
private:
    std::vector<Student*> students; // Association
    Teacher* teacher; // Association
    // ...
};

```

In summary, composition, aggregation, and association are ways to model the relationships between classes or objects in an object-oriented system. Composition and aggregation are specialized forms of association that indicate the strength and dependency of the relationship. Understanding these concepts is crucial for designing effective class structures and ensuring that your software models the real-world relationships accurately.
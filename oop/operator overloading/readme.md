## Operators that can't be overloaded

```
- sizeof
- typeid
- Scope resolution (::)
- Class member access operators (.(dot), .* (pointer to member operator))
-Ternary or conditional (?:)
```

## Operators that can be overloaded

```
Unary operators
Binary operators
Special operators ( [ ], (), etc)
```


## Criteria/Rules to Define the Operator Function

1. In the case of a non-static member function, the binary operator should have only one argument and the unary should not have an argument.

2. In the case of a friend function, the binary operator should have only two arguments and the unary should have only one argument.

3. All the class member objects should be public if operator overloading is implemented.
Operators that cannot be overloaded are  .* :: ?:

4. Operators that cannot be overloaded when declaring that function as friend function are = () [] ->.

5. The operator function must be either a non-static (member function) or a friend function.
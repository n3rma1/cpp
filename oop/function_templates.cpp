// function template : describes what a function looks like

//                      can be used to generate as many overload function

//                      in different data types

#include <iostream> 
template <typename T>   // for two different data types


T max(T x, T y){
    return (x > y) ? x : y;
}
int main(){
    std::cout << max('a', 'b');
}
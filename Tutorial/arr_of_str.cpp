#include <iostream>
#include <vector>
#include <string>
#include <array>


int main()
{
    std::cout << "Array of strings in C++" << std::endl;
    
    // using vector class
    
    std::cout << "Using vector Class: " << std::endl;
    
    std::vector<std::string> v {"black", "blue", "white"};
    for(std::string a:v){
        std::cout << a << std::endl;
    }
    
    v.push_back("orange");
    
    std::cout << std::endl;
    
    std::cout << "Modified: \n";
      for(std::string a:v){
        std::cout <<  a << std::endl;
    }
    std::cout << std::endl;
    
    // using 2d array
    
    std::cout << "Using 2D array: " << std::endl;
    char arr[3][10] = {"make", "it", "big"};
    for(std::string a: arr){
        std::cout << a << std::endl;
    }
    std::cout << std::endl;
    // using  array class 
    
    std::cout <<"Using array class: " << std::endl;
    
    std::array<std::string,3> array_class {"This", "is", "array_class"};
    
    for(std::string ac : array_class){
        std::cout << ac << std::endl;
    }
    
    // using string class
    std::cout << std::endl;
    std::cout << "Using string class: "<< std::endl;
    
    std::string color[3] {"blue","white","orange"};
    
    for(std::string str : color){
        std::cout << str << std::endl;
    }
    std::cout << std::endl;
    
    //using pointers
    
    std::cout << "Using pointers: " <<std::endl;
    
    const char* ptr[3] = {"black", "white", "blue"};
    
    for(std::string col : ptr){
        std::cout << col << std::endl;
    }
}
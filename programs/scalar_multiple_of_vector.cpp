#include<iostream>
#include <vector>
using namespace std;
 
std::vector<int> multiply(std::vector<int> vec, int scalar){
    std::vector<int> result;

    for(int value : vec){
        result.push_back(value*scalar);
    }

    return result;
}
int main()
{
    std::vector<int> inputVector{1,2,3,4};
    int scalar = 2;
    std::vector<int> resultVector = multiply(inputVector,scalar);

    cout << "original vector: ";
    for(int value : inputVector){
        cout << value << " ";
    }

    cout << "\nAfter scalar multiple by " << scalar << " : ";
    for(int value : resultVector){
        cout << value<< ",";
    }
    return 0;
}
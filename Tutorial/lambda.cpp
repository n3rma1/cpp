#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    
    vector<int> numbers = {5,4,8,1,3};
    numbers.push_back(7);
    
    auto isEven = [](int num){
        return num%2 == 0;
    };
    
    int evenCount = count_if(numbers.begin(), numbers.end(),isEven);
    
    cout << "Even numbers: " << evenCount << endl;
}
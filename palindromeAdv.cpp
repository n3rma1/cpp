// A program to take input number from user ;
// reverse it and add it to original number until it becomes palidrome
// for eg. if user input 23 its reverse is 32 and if we add 23 and 32 it becomes 
// 55 which is a palindrome.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int reverse(int num){
    string s = to_string(num);  // to_string converts 23 to string 23
    reverse(s.begin(),s.end());
    return stoi(s); // string to int (stoi)
}

int isSumPalindrome(int num){
    string num_str = to_string(num);
    if(num_str == string(num_str.rbegin(),num_str.rend())){
        return num;
    }
    for (int i = 0; i < 5; i++)
    {
        int rev_num = reverse(num);
        num+=rev_num;
        num_str = to_string(num);
        if(num_str == string(num_str.rbegin(),num_str.rend())){
            return num;
        }

    }
    return -1;
    
}
int main(){
      int num;
      cout << "Enter any number: ";
      cin >> num;
      cout << isSumPalindrome(num);

}

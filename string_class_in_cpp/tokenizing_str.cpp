
// Tokenizing a string refers to breaking a string into its components.
// In general, a token is a single meaningful element of a language.
// For example, in the English language, a token could be a word, a number, a sentence, a paragraph, or an entire article. 
// In C++, a token is a single element of the program, such as keywords, identifiers, operators, punctuations, etc.

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main(){
    std::string input_string = "This is a sample string";
    // vector of string to save tokens
    std::vector <std::string> tokens;
    std::stringstream check(input_string);
    std::string token;

    // tokenizing wrt space
    while(getline(check,token,' ')){
        tokens.push_back(token);
    }

    // printing the token vector

    for (int i = 0; i < tokens.size(); i++)
    {
        std::cout << tokens[i] << '\n';
    }
    
    return 0;

}

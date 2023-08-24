#include <iostream>
#include <vector>
#include <algorithm>

void PrintSquare(int n) {
    std::cout << n * n << " ";
}

int main() {
    // Example 1: std::for_each
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << "Example 1: Using std::for_each to print squares of elements\n";
    std::for_each(numbers.begin(), numbers.end(), PrintSquare);
    std::cout << "\n\n";

    // Example 2: std::find
    int target = 3;
    std::cout << "Example 2: Using std::find to search for a value\n";
    auto it = std::find(numbers.begin(), numbers.end(), target);
    if (it != numbers.end()) {
        std::cout << "Found " << target << " at position " << std::distance(numbers.begin(), it) << std::endl;
    } else {
        std::cout << target << " not found." << std::endl;
    }
    std::cout << "\n";

    // Example 3: std::sort
    std::vector<int> sortNumbers = {5, 2, 1, 4, 3};
    std::cout << "Example 3: Using std::sort to sort a vector\n";
    std::sort(sortNumbers.begin(), sortNumbers.end());
    for (int num : sortNumbers) {
        std::cout << num << " ";
    }
    std::cout << "\n\n";

    // Example 4: std::reverse
    std::vector<int> reverseNumbers = {1, 2, 3, 4, 5};
    std::cout << "Example 4: Using std::reverse to reverse a vector\n";
    std::reverse(reverseNumbers.begin(), reverseNumbers.end());
    for (int num : reverseNumbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}

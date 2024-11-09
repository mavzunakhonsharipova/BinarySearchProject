// SearchingApp.cpp

#include <iostream>
#include <array>
#include <vector>
#include "Searching.cpp"  // Include the Searching.cpp file

int main() {
    std::array<int, 10> arr = {1, 2, 2, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> vec = {1, 2, 2, 2, 3, 4, 5, 6, 7, 8};
    
    int target = 2;
    std::cout << "First occurrence of " << target << " in array is at index: " << binarySearchFirst(arr, target) << std::endl;
    std::cout << "First occurrence of " << target << " in vector is at index: " << binarySearchFirst(vec, target) << std::endl;

    return 0;
}

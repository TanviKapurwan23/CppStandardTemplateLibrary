#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    vec.push_back(6);  // Add an element at the end

    std::cout << "Vector contents: ";
    for (const auto& item : vec) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}


// A std::vector is a dynamic array that can grow and shrink in size. It provides random access to elements.
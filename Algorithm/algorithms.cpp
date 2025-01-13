//STL algorithms operate on containers and iterators. They include operations like sorting, searching, and transforming.


#include <iostream>
#include <vector>
#include <algorithm>  // For std::sort

int main() {
    std::vector<int> vec = {5, 3, 4, 1, 2};

    std::sort(vec.begin(), vec.end());  // Sort the vector

    std::cout << "Sorted vector: ";
    for (const auto& item : vec) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}

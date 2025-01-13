// A std::set is an associative container that stores unique elements in a sorted order. It does not allow duplicate elements.

#include <iostream>
#include <set>

int main() {
    std::set<int> my_set = {1, 2, 3, 4, 5};

    my_set.insert(6);  // Add an element (will not insert duplicate values)

    std::cout << "Set contents: ";
    for (const auto& item : my_set) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}

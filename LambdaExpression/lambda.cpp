// Lambda expressions are a way to define anonymous functions inline. They are particularly useful for short, one-off functions and are often used with STL algorithms.

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Use lambda expression with std::for_each
    std::for_each(vec.begin(), vec.end(), [](int& value) {
        value *= 2;
    });

    std::cout << "Modified vector: ";
    for (const auto& item : vec) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}
/*
Containers: Store and manage collections of data (e.g., std::vector, std::list, std::map, std::set).
Iterators: Allow traversal of container elements.
Algorithms: Perform operations on containers and iterators (e.g., std::sort).
Function Objects (Functors): Objects that act like functions, used with algorithms.
Lambda Expressions: Inline anonymous functions for quick, short operations.
*/


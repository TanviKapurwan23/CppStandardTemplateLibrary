// A std::list is a doubly linked list. It allows for efficient insertion and removal of elements from anywhere in the list.

#include <iostream>
#include <list>

int main() {
    std::list<int> lst = {1, 2, 3, 4, 5};

    lst.push_back(6);  // Add an element at the end
    lst.push_front(0); // Add an element at the beginning

    std::cout << "List contents: ";
    for (const auto& item : lst) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}

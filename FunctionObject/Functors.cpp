//Function objects, or functors, are objects that can be called as if they were functions. They are often used with algorithms.

#include <iostream>
#include <algorithm>
#include <vector>

// Functor class
class MultiplyBy {
public:
    MultiplyBy(int factor) : factor_(factor) {}
    int operator()(int value) const {
        return value * factor_;
    }
private:
    int factor_;
};

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Use functor with std::transform
    std::transform(vec.begin(), vec.end(), vec.begin(), MultiplyBy(10));

    std::cout << "Transformed vector: ";
    for (const auto& item : vec) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}

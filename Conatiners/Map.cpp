// A std::map is an associative container that stores key-value pairs. Keys are unique, and the map is usually implemented as a balanced binary tree.



#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> age_map;
    age_map["Alice"] = 30;
    age_map["Bob"] = 25;

    std::cout << "Map contents:\n";
    for (const auto& pair : age_map) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}

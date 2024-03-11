#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int target = 3;

    try {
        auto result = easyfind(numbers, target);
        std::cout << "El valor " << target << " se encuentra en la posición " << result - numbers.begin() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
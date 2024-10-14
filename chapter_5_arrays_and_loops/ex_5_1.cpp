#include <iostream>

int main() {
    std::cout << "Enter a limit: ";
    size_t limit {};
    std::cin >> limit;

    for(size_t i{1}; i <= limit; i+=2)
        std::cout << i << " * " << i << " = " << i * i << std::endl;
}
#include <iostream>

int main() {
    std::cout << "Enter two integers: ";
    int num1 {}, num2 {};
    std::cin >> num1 >> num2;

    if (num1 == num2){
        std::cout << "The integers are equal.";
    } else {
        std::cout << "The integers are not equal.";
    }
}
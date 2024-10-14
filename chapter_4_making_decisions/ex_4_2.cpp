#include <iostream>

int main() {
    std::cout << "Enter two positive integers: ";
    int num1{}, num2{};
    std::cin >> num1 >> num2;
    
    if (num1 <= 0 || num2 <= 0){
        std::cout << "The integers need to be strictly positive.";
        return 0;
    } 
    
    if (num1 < num2)
        std::cout << ((num2 % num1)?"The integers are not multiples to each other.":"The integers are multiple to each other.");
    else
        std::cout << ((num1 % num2)?"The integers are not multiples to each other.":"The integers are multiple to each other.");

}
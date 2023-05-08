#include <iostream>

int main()
{
    int a{}, b{};

    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "Before Swap" << std::endl;
    std::cout << "Value of a : " << a << std::endl;
    std::cout << "Value of b : " << b <<std::endl;

    b = a + b;
    a = b - a;
    b = b - a;

    std::cout << "After Swap" << std::endl;
    std::cout << "Value of a : " << a << std::endl;
    std::cout << "Value of b : " << b;
}
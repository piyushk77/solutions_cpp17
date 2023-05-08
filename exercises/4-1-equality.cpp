#include <iostream>
int main()
{
    int numA{}, numB{};
    std::cout << "Enter the two numbers (seperated by space): ";
    std::cin >> numA >> numB;
    if (numA == numB)
        std::cout << "The numbers are equal.";
    else
        std::cout << "The numbers are not equal.";
}
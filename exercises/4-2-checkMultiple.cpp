#include <iostream>
int main()
{
    int numA{}, numB{};
    std::cout << "Enter two positive numbers (space seperated): ";
    std::cin >> numA >> numB;

    if (numA > 0 && numB > 0)
    {
        if ((numA % numB == 0) || (numB % numA == 0))
            std::cout << "The numbers are a pair of multiples.";
        else
            std::cout << "The numbers are not pair of multiples.";
    }
    else
        std::cout << "Enter strictly positive numbers only";
}
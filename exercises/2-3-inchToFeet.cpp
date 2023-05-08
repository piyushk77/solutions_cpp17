#include <iostream>

int main ()
{
    unsigned int inches {}, feet{};
    const unsigned int inch_per_foot {12};
    std::cout << "Enter the length in inches: ";
    std::cin >> inches;
    feet = inches / inch_per_foot;
    inches %= inch_per_foot;
    std::cout << "Length = "<< feet << " feet " << inches << " inches";
}
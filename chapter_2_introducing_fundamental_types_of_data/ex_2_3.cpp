#include <iostream>

int main()
{

    const unsigned int inchesPerFeet{12};
    unsigned int inches{}, feet{};

    std::cout << "Enter the length in inches: ";
    std::cin >> inches;

    feet = inches / inchesPerFeet;
    inches %= inchesPerFeet;

    std::cout << "The length is converted to:  " << feet << " feet and " << inches << " inches.";
}
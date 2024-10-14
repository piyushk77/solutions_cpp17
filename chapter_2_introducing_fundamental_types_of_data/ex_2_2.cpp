#include <iostream>
#include <iomanip>

int main()
{
    const double pi{3.141592653589793238};
    double area{}, radius{};
    unsigned int precision{};

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    std::cout << "How much digits of precision you want? ";
    std::cin >> precision;

    area = pi * radius * radius;
    std::cout << std::fixed << std::setprecision(precision);
    std::cout << "The area of the circle is " << area << " sq. units.";
}
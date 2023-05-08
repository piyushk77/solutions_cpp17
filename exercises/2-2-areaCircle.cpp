#include <iostream>
#include <iomanip>

int main()
{
    const float pi{3.141592653589793538};
    double radius{}, area{};
    unsigned int digits{6};
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout << "Enter the precision: ";
    std::cin >> digits;
    area = pi * radius * radius;
    std::cout << "Area of the circle is: "
              << std::fixed
              << std::setprecision(digits)
              << area
              << " sq. units";
}
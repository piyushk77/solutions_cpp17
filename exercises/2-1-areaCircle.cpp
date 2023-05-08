#include <iostream>

int main()
{
    const float pi{3.14159};
    double radius{}, area{};
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    area = pi * radius * radius;
    std::cout << "Area of the circle is: " << area << " sq. units";
}
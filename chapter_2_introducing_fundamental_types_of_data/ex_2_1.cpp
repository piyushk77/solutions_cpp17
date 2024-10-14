#include <iostream>

int main()
{
    const long double pi{3.141592653589793238l};
    float area{}, radius{};

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    area = pi * radius * radius;
    
    std::cout << "The area of the circle is: " <<area<<" sq. units."<<std::endl;

}
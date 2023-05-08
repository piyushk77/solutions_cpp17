#include <iostream>
#include <cmath>

int main()
{
    const unsigned int inch_per_feet{12};
    const float pi{3.14159};
    unsigned int height_user{}, height_tree{}, dist_feet{}, dist_inches{};
    unsigned int total_dist_inches{};
    float angle_deg{}, angle_rad{};

    std::cout << "Enter your height (in inches): ";
    std::cin >> height_user;

    std::cout << "Enter the distance from tree in feet and inches (seperate by space): ";
    std::cin >> dist_feet >> dist_inches;

    std::cout << "Enter the angle subtended (in degrees): ";
    std::cin >> angle_deg;

    total_dist_inches = dist_feet * inch_per_feet + dist_inches;
    angle_rad = angle_deg * pi / 180;
    height_tree = static_cast<unsigned int>(height_user + total_dist_inches * tan(angle_rad));

    height_tree /= inch_per_feet;

    std::cout << "Height of the tree is: " << height_tree <<" feet.";
}
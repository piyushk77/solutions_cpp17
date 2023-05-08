#include <iostream>

int main()
{
    double shelf_length{}, shelf_depth{};
    unsigned int box_len{};
    const unsigned int inches_per_foot{12};
    unsigned long total_boxes{};

    std::cout << "Enter the length and depth of the shelf (in feet) (space seprated): ";
    std::cin >> shelf_length >> shelf_depth;

    std::cout << "Enter the length of the box (in inches): ";
    std::cin >> box_len;

    shelf_length *= inches_per_foot;
    shelf_depth *= inches_per_foot;

    total_boxes = (static_cast<unsigned long>(shelf_length / box_len)) * (static_cast<unsigned long>(shelf_depth / box_len));

    std::cout << "Total number of boxes that can be fit without overhang are: " << total_boxes;
}
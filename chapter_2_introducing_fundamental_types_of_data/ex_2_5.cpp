#include <iostream>

int main()
{
    float inchesPerFoot{12.0f};
    const float poundsPerKg{2.2f}, metersPerFoot{0.3048f};
    float weight{}, height{};
    float feet{}, inches{};
    float bmi{};

    std::cout << "Enter the weight in pounds: ";
    std::cin >> weight;
    std::cout << "Enter the height in feet and inches: ";
    std::cin >> feet >> inches;

    weight /= poundsPerKg;
    height = feet + inches / inchesPerFoot;
    height *= metersPerFoot;

    bmi = weight / (height * height);

    std::cout << "The body mass index is: " << bmi << ".";

}
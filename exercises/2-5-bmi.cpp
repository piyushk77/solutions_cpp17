#include <iostream>

int main()
{
    float weight_user{}, height_feet{}, height_inches{};
    float height_meter{};
    float bmi{};
    const float pounds_per_kg{2.2};
    const float meter_per_foot{0.3048};
    const float inches_per_feet{12.0};

    std::cout << "Enter your weight (in pounds): ";
    std::cin >> weight_user;

    std::cout << "Enter height in feet and inches (seperate by space): ";
    std::cin >> height_feet >> height_inches;

    weight_user /= pounds_per_kg;

    height_feet += (height_inches / inches_per_feet);
    height_meter = height_feet * meter_per_foot;

    bmi = weight_user / (height_meter * height_meter);

    std::cout << "Your BMI is: " << bmi;

}
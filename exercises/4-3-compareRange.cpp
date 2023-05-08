#include <iostream>
int main()
{
    float num{};
    std::cout << "Enter a number between 1 and 100 : ";
    std::cin >> num;
    if (num < 100 && num > 1)
    {
        if (num > 50)
            std::cout << num << " is greater than 50.";
        else if (num < 50)
            std::cout << num << " is less than 50.";
        else if (num == 50)
            std::cout << num << " is equal to 50.";
    }

    else
        std::cout << "The number is out of range.";
}
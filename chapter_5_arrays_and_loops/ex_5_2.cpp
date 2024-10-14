#include <iostream>
#include <cctype>

int main()
{
    char userContinue{'y'};
    int num{}, total{};
    size_t count{};
    while (userContinue == 'y')
    {
        std::cout << "Enter an integer: ";
        std::cin >> num;
        total += num;
        ++count;
        std::cout << "Do you want to enter more integers (y/n): ";
        std::cin >> userContinue;
        userContinue = std::tolower(userContinue);
    }

    double average{(static_cast<double>(total) / static_cast<double>(count))};
    std::cout << "Total of all the integers is: " << total << std::endl;
    std::cout << "The average of all the integers is: " << average;
}
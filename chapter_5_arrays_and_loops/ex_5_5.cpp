#include <iostream>

int main()
{
    const int maxLen{1001};
    std::cout << "Enter a string (max. " << maxLen - 1 << " characters): ";
    char text[maxLen]{};
    std::cin.getline(text, maxLen);

    int count{};
    for (int i{}; text[i]; ++i, ++count)
    {
    }

    char revText[maxLen]{};

    for (int i{}; i < count; ++i)
        revText[i] = text[count - i - 1];

    std::cout << "String in reverse is: ";

    for (auto x : revText)
    {
        std::cout << x;
    }
}
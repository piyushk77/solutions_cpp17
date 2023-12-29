#include <iostream>
#include <cctype>
#include <array>

int main()
{
    const size_t maxLen{101};
    char text[maxLen]{};
    std::cout << "Enter a string (# to mark the ending for count/ max " << maxLen - 1 << " charactes allowed ): " << std::endl;
    std::cin.getline(text, maxLen);

    size_t i{}, count{};
    do
    {
        if (!std::isspace(text[i]) && text[i] != '#')
        {
            ++count;
        }
    } while (text[i++] != '#' && text[i] != '\0');

    std::cout << "No. of non-whitespace characters enterd: " << count;
}
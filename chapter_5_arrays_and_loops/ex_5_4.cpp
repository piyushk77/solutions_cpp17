#include <iostream>

int main()
{
    const int maxLen {1001};
    std::cout << "Enter a string (max. " << maxLen - 1 << " characters): ";
    char text [maxLen] {};
    std::cin.getline(text, maxLen);

    int i{}, count {};

    while(text[i])
        ++count, ++i;
    
    std::cout << "String in reverse is: ";

    for(int x {count-1}; x >= 0; --x){
        std::cout << text[x];
    }

}
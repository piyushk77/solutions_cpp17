#include <iostream>
#include <cctype>

int main()
{
    std::cout << "Enter a letter: ";
    char letter{};
    std::cin >> letter;

    bool isLowerCase{}, isVowel{};

    isLowerCase = std::islower(letter) ? true : false;
    letter = std::tolower(letter);
    isVowel = (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') ? true : false;

    if(isVowel){
        if(isLowerCase)
            std::cout << "The letter is a lowercase vowel." << std::endl;
        else
            std::cout << "The letter is an uppercase vowel." << std::endl;
    } else {
        if(isLowerCase)
            std::cout << "The letter is a lowercase consonant." << std::endl;
        else
            std::cout << "The letter is an uppercase consonant." << std::endl;
    }

    if (isLowerCase){
        std::cout << "The letter '" << letter << "' is represented in binary as: ";
        unsigned char mask {0b1000'0000};
        std::cout << ((letter & mask) >> 7)
                  << ((letter & (mask >> 1)) >> 6)
                  << ((letter & (mask >> 2)) >> 5)
                  << ((letter & (mask >> 3)) >> 4) << " "
                  << ((letter & (mask >> 4)) >> 3)
                  << ((letter & (mask >> 5)) >> 2)
                  << ((letter & (mask >> 6)) >> 1)
                  << (letter & (mask >> 7));
    }
}
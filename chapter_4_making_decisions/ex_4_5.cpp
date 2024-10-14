#include <iostream>

int main()
{
    int mice{};
    int brown{};
    int white{};
    std::cout << "How many brown mice do you have? ";
    std::cin >> brown;
    std::cout << "How many white mice do you have? ";
    std::cin >> white;
    mice = brown + white;
    std::cout << "You have " << mice
              << (mice == 1 ? " mouse" : " mice")
              << " in total." << std::endl;
    if (mice == 1)
        std::cout << "It is a " << (brown ? "brown" : "white") << " mouse." << std::endl;
    else if (mice != 0)
        std::cout << "Of these mice, " << brown << (brown == 1 ? " is a brown mouse." : " are brown mice.");
}
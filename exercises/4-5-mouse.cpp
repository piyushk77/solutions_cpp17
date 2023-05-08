// Ex4_06.cpp
// Using the conditional operator to select output.
#include <iostream>
int main()
{
    int mice{};  // Count of all mice
    int brown{}; // Count of brown mice
    int white{}; // Count of white mice
    std::cout << "How many brown mice do you have? ";
    std::cin >> brown;
    std::cout << "How many white mice do you have? ";
    std::cin >> white;
    mice = brown + white;
    std::cout << "You have " << mice
              << (mice == 1 ? " mouse" : " mice")
              << " in total." << std::endl;

    if (mice == 1)
    {
        if (brown)
            std::cout << "It is a brown mouse.";
        else
            std::cout << "It is a white mouse.";
    }
    else if (mice)
    {
        std::cout << "Out of these mice, " << brown << ((brown > 1) ? " are " : " is a ") << "brown " << ((brown > 1) ? "mice." : "mouse.");
    }
}
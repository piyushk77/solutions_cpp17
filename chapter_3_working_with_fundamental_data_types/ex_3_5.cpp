#include <iostream>
#include <iomanip>

int main()
{
    enum class Color : unsigned int
    {
        Red = 0xFF0000,
        Green = 0x008000,
        Yellow = 0xFFFF00,
        Purple = 0x800080,
        Blue = 0x0000FF,
        Black = 0x000000,
        White = 0xFFFFFF
    };

    Color taxiColor{Color::Yellow};
    Color dressColor{Color::Purple};
    Color natureLoves{Color::Green};

    std::cout << std::setw(20) << " "
              << std::setw(8) << "Red"
              << std::setw(8) << "Green"
              << std::setw(8) << "Blue" << std::endl;

    int mask{0xFF};
    int redComponent{(static_cast<int>(taxiColor) & (mask << 16)) >> 16};
    int greenComponent{(static_cast<int>(taxiColor) & (mask << 8)) >> 8};
    int blueComponent{static_cast<int>(taxiColor) & mask};

    std::cout << std::setw(20) << "Taxi color: "
              << std::setw(8) << redComponent
              << std::setw(8) << greenComponent
              << std::setw(8) << blueComponent << std::endl;

    redComponent = (static_cast<int>(dressColor) & (mask << 16)) >> 16;
    greenComponent = (static_cast<int>(dressColor) & (mask << 8)) >> 8;
    blueComponent = static_cast<int>(dressColor) & mask;

    std::cout << std::setw(20) << "Dress color: "
              << std::setw(8) << redComponent
              << std::setw(8) << greenComponent
              << std::setw(8) << blueComponent << std::endl;

    redComponent = (static_cast<int>(natureLoves) & (mask << 16)) >> 16;
    greenComponent = (static_cast<int>(natureLoves) & (mask << 8)) >> 8;
    blueComponent = static_cast<int>(natureLoves) & mask;

    std::cout << std::setw(20) << "Nature loves: "
              << std::setw(8) << redComponent
              << std::setw(8) << greenComponent
              << std::setw(8) << blueComponent;
}
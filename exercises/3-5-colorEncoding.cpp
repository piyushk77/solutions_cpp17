#include <iostream>
#include <iomanip>

int main()
{
    enum class color : unsigned int
    {
        red = 0xFF0000,
        green = 0x008000,
        yellow = 0xFFFF00,
        purple = 0x800080,
        blue = 0x0000FF,
        black = 0x000000,
        white = 0xFFFFFF
    };

    int red_component{};
    int green_component{};
    int blue_component{};
    int mask{0x00'00'00'ff};

    color yellow = color::yellow;
    color purple = color::purple;
    color green = color::green;

    using namespace std;

    cout << hex << right << setw(15) << "COLOR" << setw(15) << "Hex Value" << setw(15) << "R" << setw(15) << "G" << setw(15) << "B" << endl;

    blue_component = (static_cast<int>(yellow)) & mask;
    green_component = (((static_cast<int>(yellow)) & (mask << 8)) >> 8);
    red_component = (((static_cast<int>(yellow)) & (mask << 16)) >> 16);
    mask = 0x00'00'00'ff;

    cout << setw(15) << "Yellow" << setw(15) << static_cast<int>(yellow) << setw(15) << red_component << setw(15) << green_component << setw(15) << blue_component << endl;

    blue_component = (static_cast<int>(purple)) & mask;
    green_component = (((static_cast<int>(purple)) & (mask << 8)) >> 8);
    red_component = (((static_cast<int>(purple)) & (mask << 16)) >> 16);
    mask = 0x00'00'00'ff;

    cout << setw(15) << "Purple" << setw(15) << static_cast<int>(purple) << setw(15) << red_component << setw(15) << green_component << setw(15) << blue_component << endl;

    blue_component = (static_cast<int>(green)) & mask;
    green_component = (((static_cast<int>(green)) & (mask << 8)) >> 8);
    red_component = (((static_cast<int>(green)) & (mask << 16)) >> 16);
    mask = 0x00'00'00'ff;

    cout << setw(15) << "Green" << setw(15) << static_cast<int>(green) << setw(15) << red_component << setw(15) << green_component << setw(15) << blue_component << endl;
}
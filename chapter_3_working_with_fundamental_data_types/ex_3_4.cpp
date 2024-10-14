#include <iostream>
#include <iomanip>

int main() {
    char ch1 {}, ch2 {}, ch3 {}, ch4 {};
    std::cout << "Enter any four characters: ";
    std::cin >> ch1 >> ch2 >> ch3 >> ch4;

    int infoPack {};

    infoPack += ((static_cast<int> (ch1)) << 24);
    infoPack += ((static_cast<int> (ch2)) << 16);
    infoPack += ((static_cast<int> (ch3)) << 8);
    infoPack += (static_cast<int> (ch4));

    std::cout << std::hex << std::setfill('0');
    std::cout << "Value of infoPack: " 
              << std::setw(8) << infoPack << std::endl;

    int mask {0xff};

    ch1 = (infoPack & mask);
    ch2 = (infoPack & (mask << 8)) >> 8;
    ch3 = (infoPack & (mask << 16)) >> 16;
    ch4 = (infoPack & (mask << 24)) >> 24;

    std::cout << std::dec << std::setfill(' ');
    std::cout << "Character 1: " << ch1 << std::endl
              << "Character 2: " << ch2 << std::endl
              << "Character 3: " << ch3 << std::endl
              << "Character 4: " << ch4 << std::endl;

}
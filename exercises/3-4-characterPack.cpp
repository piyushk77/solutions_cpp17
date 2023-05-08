#include <iostream>

int main()
{
    char char_one{}, char_two{}, char_three{}, char_four{};
    int char_pack{};
    int mask{0x00'00'00'00};
    std::cout << "Enter four characters : ";
    std::cin >> char_one >> char_two >> char_three >> char_four;
    char_pack = char_one;

    mask = char_two;
    char_pack |= (mask << 8);

    mask = 0;
    mask = char_three;
    char_pack |= (mask << 16);

    mask = 0;
    mask = char_four;
    char_pack |= (mask << 24);

    std::cout << std::hex << std::showbase << "Charaters packed as integer: " << char_pack << std::endl;
    mask = 0x00'00'00'ff;
    std::cout << "Byte one : " << (char_pack & mask) << std::endl;
    std::cout << "Byte two : " << ((char_pack & (mask << 8))>>8) << std::endl;
    std::cout << "Byte three : " << ((char_pack & (mask << 16))>>16) << std::endl;
    std::cout << "Byte four : " << ((char_pack & (mask << 24))>>24);
}
#include <iostream>
#include <iomanip>

int main()
{
    int num{};
    int inverted_num{};
    int two_comp_num{};

    std::cout << "Enter an integer: ";
    std::cin >> num;

    inverted_num = ~num;
    two_comp_num = inverted_num + 1;

    std::cout << "  " << std::setw(8) << "Original" << "  " << std::setw(8) << "Inverted" << "  " << std::setw(8) << "Inv + 1" <<std::endl;

    std::cout << std::hex << std::setfill('0') << std::right;
    std::cout << "  " << std::setw(8) << num << "  " << std::setw(8) << inverted_num << "  " << std::setw(8) << two_comp_num;
    std::cout << std::setfill(' ') << std::dec << std::endl;
    std::cout << "  " << std::setw(8) << num << "  " << std::setw(8) << inverted_num << "  " << std::setw(8) << two_comp_num;
}
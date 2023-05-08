#include <iostream>
int main()
{
    unsigned int value_1{}, value_2{}, merge_to_small {};
    unsigned int smallValue{}, largeValue{};
    unsigned int first_by_second{};
    unsigned int second_by_first{};
    unsigned int modulo_first{}, modulo_second{};
    unsigned int first_factor{};
    unsigned int second_factor{};
    
    std::cout << "Enter the first number: ";
    std::cin >> value_1;
    std::cout << "Enter the second number: ";
    std::cin >> value_2;

    first_by_second = value_1 / value_2;
    second_by_first = value_2 / value_1;

    first_factor = first_by_second / (first_by_second + second_by_first);
    second_factor = second_by_first / (first_by_second + second_by_first);

    modulo_first = value_1 % value_2;
    modulo_second = value_2 % value_1;

    merge_to_small = (modulo_first * second_factor) + (modulo_second * first_factor);
    smallValue = merge_to_small; 
    largeValue = value_1 + value_2 - smallValue;

    std::cout<< "Large Number: " << largeValue << std::endl;
    std::cout<< "Small Number: " << smallValue << std::endl;

}
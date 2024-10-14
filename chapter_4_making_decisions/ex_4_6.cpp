#include <iostream>

int main() {
    std::cout << "Enter an integer: ";
    int num {};
    std::cin >> num;
    std::cout << (num==20 ? "Integer equals to 20." : 
                    (num < 20 ? "Integer is less than 20." : 
                        (num <= 30) ? "Integer is greater than 20 but not greater than 30." : 
                            (num <= 100 ? "Integer is greater than 30 but not exceeding 100." : 
                                "Integer is greater than 100.") ) );
}
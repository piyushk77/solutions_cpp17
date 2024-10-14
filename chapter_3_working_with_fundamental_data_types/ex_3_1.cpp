#include<iostream>
#include<iomanip>

int main(){
    int userInput {};
    std::cout << "Enter an integer: ";
    std::cin >> userInput;

    int invertedInput {~userInput};
    int complemented {invertedInput + 1};
    
    std::cout << std::endl;
    std::cout << std::setw(8) << "Original" << "    "
              << std::setw(8) << "Inverted" << "    "
              << std::setw(8) << "Complement";

    std::cout << std::hex << std::setfill('0');
    std::cout << std::endl;
    std::cout << std::setw(8) << userInput << "    "
              << std::setw(8) << invertedInput << "    "
              << std::setw(8) << complemented;
    
    std::cout << std::dec << std::setfill(' ');
    std::cout << std::endl;
    std::cout << std::setw(8) << userInput << "    "
              << std::setw(8) << invertedInput << "    "
              << std::setw(8) << complemented;

}
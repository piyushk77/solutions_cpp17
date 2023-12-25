#include <iostream>

int main() {
    std::cout << "Enter a number between 1 to 100: ";
    double num {};
    std::cin >> num;
    if(num > 1 && num < 100){
        std::cout << "The number is in the range." << std::endl;
        if(num < 50){
            std::cout << "The number is less than 50." << std::endl ;
        } else if (num == 50){
            std::cout << "The number is equal to 50." << std::endl ;
        } else {
            std::cout << "The number is greater than 50." << std::endl ;
        }
    }
    
    std::cout << "The number entered is " << num;
}
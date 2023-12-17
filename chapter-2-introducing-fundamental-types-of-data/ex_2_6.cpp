#include <iostream>

int main(){
    unsigned a {}, b {};
    unsigned result {};
    std::cout << "Enter two positive integers: ";
    std::cin >> a >> b;
    unsigned smallNum = ((a/b)*b + (b/a)*a)/((a/b)+(b/a));
    unsigned largeNum = a + b - smallNum;

    std::cout << "Small number is: " << smallNum <<std::endl;
    std::cout << "Large number is: " << largeNum;
}
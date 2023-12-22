#include <iostream>

int main(){
    int a {}, b{};
    std::cout << "Enter two integer values: ";
    std::cin >> a >> b;

    std::cout << "Before swap :\na = " << a <<"\nb = "<< b;

    a += b;
    b = a - b;
    a -= b;

    std::cout << "\nAfter swap :\na = " << a <<"\nb = "<< b;

}
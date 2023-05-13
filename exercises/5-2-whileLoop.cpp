#include <iostream>

int main()
{
    char choice {'n'};
    unsigned count {};
    double num {}, sum {}, average {};

    while(choice == 'n'){
        std::cout<<"Enter a number : ";
        std::cin>>num;
        ++count;
        sum += num;
        std::cout<<"Are you done entering ? (y/n) : ";
        std::cin>>choice;
    }

    average = sum / static_cast<double>(count);

    std::cout<<"Total sum of numbers : "<<sum<<std::endl;
    std::cout<<"Average : "<<average;
}
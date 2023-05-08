#include <iostream>
int main(){
    int num {};
    std::cout<<"Enter a number: ";
    std::cin >> num;
    std::cout<< (
    (num>100)?"Greater than 100":
        (num>30)?"Greater than 30 but not exceeding 100":
            (num>20)?"Greater than 20 but not greater than 30":
                "Less than 20");
}
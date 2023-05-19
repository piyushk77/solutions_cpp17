#include<iostream>
#include<iomanip>

int main(){
    unsigned int odd_numlist [50] {};
    unsigned int* ptr {odd_numlist};
    for(unsigned i {1}, j{}; j<50; i+=2, ++j)
        *(odd_numlist+j) = i;
    for(unsigned i {0}; i<50; ++i){
        std::cout<<std::setw(10)<<*(ptr++);
        if((i+1)%10 == 0)
            std::cout<<std::endl;
    }

    std::cout<<std::endl;

    for(int i {0}; i<50; ++i){
        std::cout<<std::setw(10)<<*(--ptr);
        if((i+1)%10 == 0)
            std::cout<<std::endl;

    }
}
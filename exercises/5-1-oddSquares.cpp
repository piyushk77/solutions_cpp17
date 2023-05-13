#include<iostream>
#include<iomanip>
#include<cmath>

int main (){
    unsigned limit {};
    std::cout<<"Enter the limit : ";
    std::cin>>limit;
    for(unsigned i {1}; i <= limit; i+=2){
        std::cout<<std::setw(5)<<i<<std::setw(5)<<"*"<<std::setw(5)<<i<<std::setw(5)<<"="<<std::setw(10)<<std::pow(i,2)<<std::endl;
    }
}
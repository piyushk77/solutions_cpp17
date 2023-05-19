#include<iostream>
#include<memory>
#include<cmath>

int main(){
    unsigned int size {};
    std::cout<<"Enter the size of the array: ";
    std::cin>>size;

    std::unique_ptr<double[]> numlist {std::make_unique<double []>(size)};
    for(unsigned i {}; i<size; ++i){
        numlist[i] = 1/std::pow(i+1,2);
    }

    double sum {};
    for(unsigned i {}; i<size; ++i){
        sum += numlist[i];
    }

    sum *= 6;

    std::cout<<"Processed value: "<<std::sqrt(sum);
}
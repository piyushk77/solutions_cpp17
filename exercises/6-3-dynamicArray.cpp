#include<iostream>
#include<cmath>

int main(){
    unsigned int size {};
    std::cout<<"Enter the size of the array: ";
    std::cin>>size;

    double* numlist {new double [size]};
    for(unsigned i {}; i<size; ++i){
        *(numlist+i) = 1/std::pow(i+1,2);
    }

    double sum {};
    for(unsigned i {}; i<size; ++i){
        sum += numlist[i];
    }

    delete[] numlist;

    sum *= 6;

    std::cout<<"Processed value: "<<std::sqrt(sum);
}
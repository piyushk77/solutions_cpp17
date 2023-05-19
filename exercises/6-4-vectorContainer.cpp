#include<iostream>
#include<vector>
#include<cmath>


int main(){
    unsigned int size {};
    std::cout<<"Enter the size of the array: ";
    std::cin>>size;

    auto* numlist {new std::vector<double>};

    for(unsigned i {}; i<size; ++i){
        (*numlist).push_back(1/std::pow(i+1,2));
    }

    double sum {};
    
    for(unsigned i {}; i<size; ++i){
        sum += (*numlist)[i];
    }

    delete numlist;

    sum *= 6;

    std::cout<<"Processed value: "<<std::sqrt(sum);
}
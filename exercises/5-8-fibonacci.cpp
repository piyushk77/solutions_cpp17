#include<iostream>
#include<array>

int main(){
    const unsigned len {93u};
    std::array<unsigned long long,len> fibonacci {1,1};
    for(unsigned i {2u}; i<len; ++i){
        fibonacci[i] = fibonacci[i-1u] + fibonacci[i-2u];
    }
    for(unsigned long long x: fibonacci)
        std::cout<<x<<std::endl;
}

// The number of digits to store a fibonacci number upto 93rd element required about 20 digits which required the unsigned long long data type.
// This won't be possible with other integer data types.
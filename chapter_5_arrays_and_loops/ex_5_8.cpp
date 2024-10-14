#include <iostream>
#include <array>

int main()
{
    const size_t elementCount{93};
    std::array<size_t, elementCount> fibonacci{1, 1};

    for (size_t i{2}, first{0}, second{1}; i < fibonacci.size(); ++i, ++first, ++second)
        fibonacci[i] = fibonacci[first] + fibonacci[second];
    
    for(auto num: fibonacci)
        std::cout << num << std::endl;
}
#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
    size_t upperBound{};
    const unsigned short width {10};
    unsigned short count{};

    std::cout << "Enter an upper bound: ";
    std::cin >> upperBound;

    std::vector<size_t> numArr;

    for (size_t i{1}; i <= upperBound; ++i)
        numArr.push_back(i);
    
    for (auto num : numArr)
    {
        if ((num % 7) && (num % 13)){
            std::cout << std::setw(width) << num;
            ++count;
        }

        if(count == 10){
            std::cout << std::endl;
            count = 0;
        }
    }
}
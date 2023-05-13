#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
    int upperLimit;
    std::vector<int> numList;
    int count{1}, ch{};

    std::cout << "Enter the upper limit of numbers : ";
    std::cin >> upperLimit;

    while (count <= upperLimit)
    {
        numList.push_back(count);
        ++count;
    }

    for (int i{}; i < upperLimit; ++i)
    {
        if (numList[i] % 7 != 0)
        {
            if (numList[i] % 13 != 0)
            {
                std::cout << std::setw(5) << numList[i];
                ++ch;
                if (ch % 10 == 0)
                    std::cout << std::endl;
            }
        }
    }
}
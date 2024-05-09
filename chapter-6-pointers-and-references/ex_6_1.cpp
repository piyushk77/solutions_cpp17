#include <iostream>
using namespace std;

int main()
{
    const int arraySize{50};
    int *oddNums{new int[arraySize]};
    for (int i{}, num{1}; i < arraySize; ++i, num += 2)
    {
        *(oddNums + i) = num;
    }

    cout << "Following are the odd numbers:" << endl;
    for (int i{}; i < arraySize; ++i)
    {
        cout << *(oddNums + i) << " ";
        if ((i + 1) % 10 == 0)
            cout << endl;
    }
    cout << endl;
    cout << "Following are the odd numbers in reverse order:";
    for (int i{arraySize - 1}; i >= 0; --i)
    {
        if ((i + 1) % 10 == 0)
            cout << endl;
        cout << *(oddNums + i) << " ";
    }

    delete[] oddNums;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n{};
    cout << "Enter the size of array : ";
    cin >> n;
    double *arr{new double[n]};
    for (int i{}; i < n; ++i)
        *(arr + i) = pow(1 / ((static_cast<double>(i)) + 1), 2);
    double sum{};
    for (int i{}; i < n; ++i)
    {
        sum += arr[i];
    }
    sum *= 6;
    cout << "Result is " << sqrt(sum);
    delete[] arr;
}
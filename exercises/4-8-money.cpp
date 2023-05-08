#include <iostream>
int main()
{
    float money{};
    const float quarter{25}, dimes{10}, nickles{5}, pennies{1};
    std::cout << "Enter amount between $0 and $10: ";
    std::cin >> money;
    if (int tempAmnt{}; money > 0 && money < 10)
    {
        money *= 100;

        tempAmnt = money / quarter;
        std::cout << "You require to have: ";
        std::cout << tempAmnt << ((tempAmnt > 1) ? " quarters, " : " quarter, ");

        tempAmnt = money - tempAmnt * quarter;
        money = tempAmnt;
        tempAmnt /= dimes;
        std::cout << tempAmnt << ((tempAmnt > 1) ? " dimes, " : " dime, ");

        tempAmnt = money - tempAmnt * dimes;
        money = tempAmnt;
        tempAmnt /= nickles;
        std::cout << tempAmnt << ((tempAmnt > 1) ? " nickels and " : " nickel and ");

        tempAmnt = money - tempAmnt * nickles;
        money = tempAmnt;
        tempAmnt /= pennies;
        std::cout << tempAmnt << ((tempAmnt > 1) ? " pennies. " : " penny. ");
    }
    else
        std::cout << "Kindly enter the amount between $0 and $10 (exclusive).";
}
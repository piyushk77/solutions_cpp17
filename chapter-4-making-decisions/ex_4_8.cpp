#include <iostream>

int main()
{
    std::cout << "Enter the amount between (0$ and $10): $";
    double amount{};
    std::cin >> amount;

    if (amount >= 10 || amount < 0)
    {
        std::cout << "Please enter the amount in the given range.";
        return 0;
    }

    const short centsPerDollar{100};
    amount *= centsPerDollar;

    unsigned short quarters{}, dimes{}, nickles{}, pennies{};
    const short centsPerQuarter{25}, centsPerDime{10}, centsPerNickle{5}, centsPerPenny{1};

    quarters = amount / centsPerQuarter;
    amount -= quarters * centsPerQuarter;

    dimes = amount / centsPerDime;
    amount -= dimes * centsPerDime;

    nickles = amount / centsPerNickle;
    amount -= nickles * centsPerNickle;

    pennies = amount / centsPerPenny;

    std::cout << "You need " << quarters << (quarters == 1 ? " quarter, " : " quarters, ")
              << dimes << (dimes == 1 ? " dime, " : " dimes, ")
              << nickles << (nickles == 1 ? " nickle, " : " nickles, ") << "and "
              << pennies << (pennies == 1 ? " penny" : " pennies") << " to make up this amount.";
}
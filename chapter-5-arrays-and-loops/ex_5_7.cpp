#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
    std::cout << "Enter the product details" << std::endl;

    std::vector<int> productNo;
    std::vector<unsigned int> quantity;
    std::vector<double> unitPrice;
    std::vector<double> cost;

    // Input the catalogue
    {
        char userContinue{'y'};
        for (size_t i{}; userContinue == 'y'; ++i)
        {
            std::cout << "Record " << i + 1 << ":" << std::endl;
            std::cout << "\t";
            std::cout << "Enter product no.: ";
            productNo.push_back(0);
            std::cin >> productNo[i];

            std::cout << "\t";
            std::cout << "Enter quantity: ";
            quantity.push_back(0);
            std::cin >> quantity[i];

            std::cout << "\t";
            std::cout << "Enter unit price: ";
            unitPrice.push_back(0.0);
            std::cin >> unitPrice[i];

            cost.push_back(0.0);
            cost[i] = unitPrice[i] * static_cast<double>(quantity[i]);

            std::cout << "\nWant to enter more? (y/n): ";
            std::cin >> userContinue;
            std::cout << std::endl;
        }
    }

    // Calculate total cost
    double total{};
    for (auto price : cost)
        total += price;

    // Output the catalogue
    const size_t width{15}, precision{2};
    std::cout << std::fixed << std::setprecision(precision);
    std::cout << "Following is the complete catalogue of the products: " << std::endl
              << std::endl;
    std::cout << std::setw(width) << "Product" << std::setw(width) << "Quantity" << std::setw(width) << "Unit Price" << std::setw(width) << "Cost" << std::endl;
    for (size_t i{}; i < productNo.size(); ++i)
    {
        std::cout << std::setw(width) << productNo[i] << std::setw(width) << quantity[i] << std::setw(width) << unitPrice[i] << std::setw(width) << cost[i];
        std::cout << std::endl;
    }
    std::cout << std::setw(width) << " " << std::setw(width) << " " << std::setw(width) << " " << std::setw(width) << total << std::endl;
}
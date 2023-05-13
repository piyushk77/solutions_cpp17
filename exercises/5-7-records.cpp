#include<iostream>
#include<vector>
#include<iomanip>

int main() {
    std::vector<unsigned> product;
    std::vector<int> quantity;
    std::vector<double> unitPrice, cost;

    std::cout<<"Enter records to build the cost sheet"<<std::endl;

    char choice {'y'};
    unsigned count {1};
    unsigned prodNo {}, qty {};
    double unit {};

    while(choice != 'n'){
        std::cout<<std::endl<<"RECORD [ "<<count<<" ]"<<std::endl;
        std::cout<<"Enter product no. : ";
        std::cin>>prodNo;
        product.push_back(prodNo);
        std::cout<<"Enter quantity : ";
        std::cin>>qty;
        quantity.push_back(qty);
        std::cout<<"Enter unit cost : ";
        std::cin>>unit;
        unitPrice.push_back(unit);

        cost.push_back(static_cast<double>(qty)*unit);

        ++count;

        std::cout<<std::endl<<"Want to enter more records ? (y/n) : ";
        std::cin>>choice;
    }

    std::cout<<std::left;
    std::cout<<std::endl<<"Table generated : "<<std::endl;
    std::cout<<"************************************************************"<<std::endl;
    std::cout<<std::setw(15)<<"Product"<<std::setw(15)<<"Quantity"<<std::setw(15)<<"Unit Price"<<std::setw(15)<<"Cost"<<std::endl;
    std::cout<<"************************************************************"<<std::endl;

    for(unsigned i {}; i<product.size(); ++i){
        std::cout<<std::setw(15)<<product[i]<<std::setw(15)<<quantity[i]<<std::setw(15)<<unitPrice[i]<<std::setw(15)<<cost[i];
        std::cout<<std::endl;
    }
}
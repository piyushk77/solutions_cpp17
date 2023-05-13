#include<iostream>

int main(){
    char ch {};
    unsigned count {};
    std::cout<<"Enter a line of text (include a # to terminate count) : \n";
    do{
        std::cin>>ch;
        ++count;
    }while(ch != '#');

    std::cout<<"You entered "<<count<< (count==1?" character":" characters including '#'");
}
#include <iostream>

int main()
{
    char text[1000]{};
    int count{};

    std::cout << "Enter a line of text (max 1000 characters) : ";
    std::cin.getline(text, 1000, '\n');

    for (; text[count] != '\0'; ++count)
    {
        ;
    }

    char temp;

    for(int i {}; i<= count/2; ++i){
        temp = text[i];
        text[i] = text[count-1-i];
        text[count-1-i] = temp;
    }

    std::cout<<"Reversed line of characters : ";

    for(int i {}; text[i] != '\0'; ++i ){
        std::cout<<text[i];
    }    
}
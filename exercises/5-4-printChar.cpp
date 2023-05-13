#include<iostream>

int main(){
    char text[1000] {};
    int count {};

    std::cout<<"Enter a line of text (max 1000 characters) : \n";
    std::cin.getline(text,1000,'\n');
    
    while(text[count] != '\0'){
        ++count;
    }

    for(; count >= 0; --count){
        if(text[count]=='\0')
            std::cout<<"text ["<<count<<"] = "<<"\\0"<<std::endl;
        else
            std::cout<<"text ["<<count<<"] = "<<text[count]<<std::endl;
    }
}
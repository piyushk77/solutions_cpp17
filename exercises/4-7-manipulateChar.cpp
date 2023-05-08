#include<iostream>
int main(){
    char ch {}, tempCh {};
    std::cout<<"Enter a letter: ";
    std::cin>>ch;
    tempCh = std::tolower(ch);

    if(!std::isalpha(ch)){
        std::cout<<"Entered character is not a letter.";
        return 0;
    }

    switch (tempCh)
    {
    case 'a': case 'e': case 'i': case 'o': case 'u': 
        std::cout<<"The letter is a vowel."<<std::endl;
        break;
    default:
        std::cout<<"The letter is a consonant."<<std::endl;
        break;
    }

    if(std::islower(ch)){
        std::cout<<"The letter is in lowercase."<<std::endl;
        char mask = 0b0000'0001;
        std::cout<<"Letter: "<<ch<<std::endl;
        std::cout<<"In binary: " <<
            static_cast<int>((ch&(mask<<7))>>7) <<
            static_cast<int>((ch&(mask<<6))>>6) <<
            static_cast<int>((ch&(mask<<5))>>5) <<
            static_cast<int>((ch&(mask<<4))>>4) <<
            static_cast<int>((ch&(mask<<3))>>3) <<
            static_cast<int>((ch&(mask<<2))>>2) <<
            static_cast<int>((ch&(mask<<1))>>1) <<
            static_cast<int>((ch&(mask<<0))>>0) << std::endl;
    } else {
        std::cout<<"The letter is in uppercase.";
    }
}
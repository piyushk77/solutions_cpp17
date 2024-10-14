#include <iostream>
#include <cctype>

int main() {
    std::cout << "Enter your age: ";
    int age {};
    std::cin >> age;
    if (age <= 21 || age >= 35 ){
        std::cout << "Sorry, you do not qualify.";
        return 0;
    }

    std::cout << "Enter your gender (m/f): ";
    char gender {};
    std::cin >> gender;
    gender = std::tolower(gender);
    if (gender != 'm' && gender != 'f'){
        std::cout << "Sorry, you do not qualify.";
        return 0;
    }

    std::cout << "Select your degree: " << std::endl;
    std::cout << "1) Associate\n2) Bachelor\n3) Professional\n4) Master\n5) Doctor\n6) None" << std::endl;
    std::cout << "Only one: ";
    enum class academicDegree {associate = 1, bachelor, professional, master, doctor, none};
    int input;
    std::cin >> input;
    academicDegree degree = static_cast<academicDegree>(input);
    if(degree < academicDegree::associate || degree > academicDegree::none){
        std::cout << "Sorry, you do not qualify.";
        return 0;
    }

    std::cout << "Are you married ? (y/n) : ";
    char ismarried {};
    std::cin >> ismarried;
    ismarried = std::tolower(ismarried);
    if(ismarried != 'y' && ismarried != 'n'){
        std::cout << "Sorry, you do not qualify.";
        return 0;
    }
    bool married {(ismarried == 'y')?true:false};
    
    std::cout << "Do you speak Hindi ? (y/n) : ";
    char speaksAns {};
    std::cin >> speaksAns;
    speaksAns = std::tolower(speaksAns);
    if(speaksAns != 'y' && speaksAns != 'n'){
        std::cout << "Sorry, you do not qualify.";
        return 0;
    }
    bool speaksHindi {(speaksAns == 'y')?true:false};

    std::cout << "Do you speak Urdu ? (y/n) : ";
    std::cin >> speaksAns;
    speaksAns = std::tolower(speaksAns);
    if(speaksAns != 'y' && speaksAns != 'n'){
        std::cout << "Sorry, you do not qualify.";
        return 0;
    }
    bool speaksUrdu {(speaksAns == 'y')?true:false};

    if(gender == 'f' && (degree == academicDegree::bachelor || degree == academicDegree::master) && !married && (speaksHindi || speaksUrdu))
        std::cout << "Congratulations! you are selected.";
    else
        std::cout << "Sorry, you do not qualify.";

}
#include <iostream>
#include <cmath>

int main(){
    const double pi {3.141592653589793238};
    const unsigned int inchesPerFeet {12};
    unsigned int distance {}, feetDistance {}, inchesDistance{}, eyeHeight {}, treeHeight {}, feetTreeHeight {}, inchesTreeHeight {};
    double degreeAngle {};
    std::cout << "Enter the distance of the tree in feet and inches: ";
    std::cin >> feetDistance >> inchesDistance;

    distance = feetDistance * inchesPerFeet + inchesDistance;

    std::cout << "Enter the angle in degrees: ";
    std::cin >> degreeAngle;

    std::cout << "Enter the height of the eyepiece in inches: ";
    std::cin >> eyeHeight;

    double radianAngle {pi * degreeAngle / 180};

    treeHeight = std::round(eyeHeight + distance * std::tan(radianAngle));

    feetTreeHeight = treeHeight / inchesPerFeet;
    inchesTreeHeight = treeHeight % inchesPerFeet;


    std::cout << "The height of the tree is " << feetTreeHeight << " feet and " << inchesTreeHeight <<" inches.";
}
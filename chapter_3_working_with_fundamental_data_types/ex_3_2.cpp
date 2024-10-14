#include <iostream>

int main() {
    double shelfLength {};
    std::cout << "Enter the length of the shelf (in feet): ";
    std::cin >> shelfLength;

    double shelfDepth {};
    std::cout << "Enter the depth of the shelf (in feet): ";
    std::cin >> shelfDepth;

    int boxLength {};
    std::cout << "Enter the length of square box (in inches): ";
    std::cin >> boxLength;

    const int inchesPerFoot {12};

    // Convert feet to inches: 
    shelfLength *= inchesPerFoot;
    shelfDepth *= inchesPerFoot;

    int boxOverLength {static_cast<int>(shelfLength / boxLength)};
    int boxOverDepth {static_cast<int>(shelfDepth / boxLength)};

    long totalBoxes {boxOverLength * boxOverDepth};

    std::cout << "Total no. of boxes that can fit: " << totalBoxes;
    
}
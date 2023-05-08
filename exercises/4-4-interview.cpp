#include <iostream>

int main()
{
    unsigned int age{};
    char gender{};
    enum class AcademicDegree
    {
        none = 0,
        associate,
        bachelor,
        professional,
        master,
        doctor
    };

    AcademicDegree degree{};
    bool married{}, speaksHindi{}, speaksUrdu{};

    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age > 21 && age < 35)
    {
        int temp;
        std::cout << "Select your degree: " << std::endl;
        std::cout << "0) none\n1) associate\n2) bachelor\n3) professional\n4) master\n5) doctor\n";
        std::cin >> temp;
        degree = static_cast<AcademicDegree>(temp);
        if (degree == AcademicDegree::bachelor)
        {
            std::cout << "Are you married (0 for not, 1 for yes): ";
            std::cin >> married;
            if (!married)
            {
                std::cout << "Do you speak Hindi (0 for not, 1 for yes): ";
                std::cin >> speaksHindi;
                std::cout << "Do you speak Urdu (0 for not, 1 for yes): ";
                std::cin >> speaksUrdu;
                if (speaksHindi || speaksUrdu)
                {
                    std::cout << "Congratulations! you qualify this job.";
                    return 0;
                }
            }
        }
    }
    std::cout << "Sorry! you do not qualify this job.";
}
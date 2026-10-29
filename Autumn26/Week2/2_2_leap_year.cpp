#include <iostream>

int main() {
    int year;

    std::cout << "please enter a year: ";
    std::cin >> year;

    if ((year % 4) == 0) {
        if ((year % 100) == 0) {
            if((year % 400) == 0) {
                std::cout << "leap year" << std::endl;

            }
            else {
                std::cout<< "not a leap year" << std::endl;

            }
        }
        else {
            std::cout << "leap year" << std::endl;

        }
    }
    else {
        std::cout << "not a leap year" << std::endl;
        
    }
}






// leap year if divisible by 4 unless it is also divisible by 100
// not leap year if divisible by 100 unless it is also divisible by 400
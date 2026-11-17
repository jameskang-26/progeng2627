
#include <iostream>

int main() {
    int lower, upper, guess;
    char feedback;

    std::cout << "Enter lower bound: ";
    std::cin >> lower;

    std::cout << "Enter upper bound: ";
    std::cin >> upper;

    if (lower > upper) {
        std::cout << "Invalid range" << std::endl;
        return 0;
    }

    while (lower <= upper) {

        guess = lower + (upper - lower) / 2;

        std::cout << "Is your number " << guess << "?" << std::endl;
        std::cout << "Enter h (higher), l (lower), or c (correct): ";
        std::cin >> feedback;

        if (feedback == 'c') {
            std::cout << "I found your number!" << std::endl;
            break;
        }
        else if (feedback == 'h') {
            lower = guess + 1;
        }
        else if (feedback == 'l') {
            upper = guess - 1;
        }
        else {
            std::cout << "Invalid feedback" << std::endl;
        }
    }

    return 0;
}

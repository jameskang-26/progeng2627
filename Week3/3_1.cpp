#include <iostream>

int main() {
    int n, counter = 0;
    double sum = 0, average;

    std::cout << "enter a number: " << std::endl;
    std::cin >> n;

    while (n != 0) {
        sum = sum + n;
        counter = counter + 1;

        average = sum / counter;

        std::cout << "the average so far is: " << std::endl;
        std::cout << average << std::endl;

        std::cout << "enter a number: " << std::endl;
        std::cin >>n;
    }

}


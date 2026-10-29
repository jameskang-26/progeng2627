#include <iostream>

int main() {
    double weight, height, bmi;

    std::cout << "weight in kg: ";
    std::cin >> weight;

    std::cout << "height in m: ";
    std::cin >> height;

    bmi = weight / (height * height);

    std::cout << "bmi: " << bmi << std::endl;
    
}
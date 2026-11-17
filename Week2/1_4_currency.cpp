#include <iostream>

int main() {
    double pounds, euros;
    const double exchange_rate = 1.2;

    std::cout << "British pounds: ";
    std::cin >> pounds;

    euros = pounds * exchange_rate;

    std::cout << "in Euros: " << euros << std::endl;

}
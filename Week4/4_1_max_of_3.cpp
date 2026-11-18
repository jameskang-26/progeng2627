#include <iostream>

double mymax(double a, double b, double c) {
    double largest = a;

    if (b > largest) {
        largest = b;
    }

    if (c > largest) {
        largest = c;
    }

    return largest;
}

int main() {
    std::cout << mymax(-4, 5, 7.5) << std::endl;
    std::cout << mymax(3, 8, 5) << std::endl;
    std::cout << mymax (2, 3, 3) << std::endl;

}

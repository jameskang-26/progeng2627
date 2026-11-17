#include <iostream>

int main() {
    int n;
    int steps = 0;

    std::cout << "enter a number: " << std::endl;
    std::cin >> n;

    int maximum = n;

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;

        }
        else {
            n = 3 * n + 1;

        }

        std::cout << n << " ";
        steps++;

        if (n > maximum) {
            maximum = n;

        }
    }

    std::cout << std::endl;
    std::cout << "steps: " << steps << std::endl;
    std::cout << "maximum: " << maximum << std::endl;
    
}
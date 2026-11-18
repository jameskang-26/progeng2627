#include <iostream>

int smallest_factor(int n) {
    for (int cf = 2; cf < n; cf++) {
        if (n % cf == 0) {
            return cf;
        }
    }

    return 0;
}

int main() {
    int lower, upper;

    std::cin >> lower >> upper;

    for (int n = lower; n <= upper; n++) {

        if (smallest_factor(n) == 0) { //cf is 0 when the number is a prime number
            std::cout << n << std::endl; 
        }
    }
}

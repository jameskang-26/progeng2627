#include <iostream>

double mypow(double base, int exp) {
    double result = 1;

    for (int i = 0; i < exp; i++) {
        result = result * base;

    }
    return result;
}

int main() {
    double x, sum = 0;
    int n;

    std::cin >> x >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + mypow(x, i);

    }

    std::cout << "sum = " << sum << std::endl;
    
}
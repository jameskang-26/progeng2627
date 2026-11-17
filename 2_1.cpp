#include <iostream>

int main() {
    int n, remainder;

    std::cout << "please enter a number: " << std::endl;
    std::cin >> n;

    remainder = n % 2;

    if (remainder == 0) {
        std::cout << " the number is even" << std::endl;

    }
    else {
        std::cout <<"the number is odd" <<std::endl;

    }

}
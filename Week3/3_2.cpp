#include <iostream>

int main() {
    int n;
    int result = 1;

    std::cout << "enter a number: " << std::endl;
    std::cin >> n;
    
    for (int i = 1; i <= n; i++) {
        result = result * i;

    }

    std::cout << result << std::endl;

}
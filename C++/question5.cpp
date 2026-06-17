#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    if (a > b) {
        std::cout << "First value is greater" << std::endl;
    } else {
        std::cout << "Second value is greater" << std::endl;
    }

    return 0;
}
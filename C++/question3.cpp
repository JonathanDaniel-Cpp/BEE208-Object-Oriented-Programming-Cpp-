#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Enter three integers: ";
    std::cin >> a >> b >> c;

    if (a == b && b == c) {
        std::cout << "Equal\n";
    } else {
        std::cout << "Not equal\n";
    }

    return 0;
}



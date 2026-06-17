#include <iostream>
#include <string>

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (input == "hello") {
        std::cout << "Hello!\n";
    } else {
        std::cout << "Goodbye!\n";
    }

    return 0;
}



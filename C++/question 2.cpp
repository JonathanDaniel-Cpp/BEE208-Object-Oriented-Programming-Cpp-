#include <iostream>
#include <cmath>

int main() {
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    const double pi = 3.141592653589793;
    double radiusSquared = std::pow(radius, 2);
    double area = pi * radiusSquared;

    std::cout << "Area of the circle: " << area << "\n";
    return 0;
}



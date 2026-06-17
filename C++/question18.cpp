#include <iostream>
using namespace std;

// Function to convert binary string to decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    
    // Traverse from right to left
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += (1 << power);  // 1 << power is equivalent to 2^power
        }
        power++;
    }
    
    return decimal;
}

// Alternative method using built-in function
int binaryToDecimalBuiltIn(string binary) {
    return stoi(binary, nullptr, 2);  // stoi with base 2
}

int main() {
    // Test cases
    string binaryNumbers[] = {"1010", "11111", "1000", "101", "111", "10101"};
    int arraySize = sizeof(binaryNumbers) / sizeof(binaryNumbers[0]);
    
    cout << "Converting Binary to Decimal:\n";
    cout << "------------------------------\n";
    
    for (int i = 0; i < arraySize; i++) {
        string binary = binaryNumbers[i];
        int decimal = binaryToDecimal(binary);
        cout << "Binary: " << binary << " -> Decimal: " << decimal << "\n";
    }
    
    cout << "\nUsing built-in method:\n";
    cout << "------------------------------\n";
    
    for (int i = 0; i < arraySize; i++) {
        string binary = binaryNumbers[i];
        int decimal = binaryToDecimalBuiltIn(binary);
        cout << "Binary: " << binary << " -> Decimal: " << decimal << "\n";
    }
    
    return 0;
}
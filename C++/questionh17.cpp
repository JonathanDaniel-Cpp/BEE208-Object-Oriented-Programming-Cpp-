#include <iostream>
using namespace std;

// Function to check if a number is a power of 2
bool isPowerOfTwo(int n) {
    // A number is a power of 2 if:
    // 1. It's greater than 0
    // 2. It has exactly one bit set (n & (n-1) == 0)
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    // Test cases
    int testNumbers[] = {1, 2, 3, 4, 5, 8, 15, 16, 32, 64, 100, 128, 256};
    int arraySize = sizeof(testNumbers) / sizeof(testNumbers[0]);
    
    cout << "Checking if numbers are powers of 2:\n";
    cout << "-----------------------------------\n";
    
    for (int i = 0; i < arraySize; i++) {
        int num = testNumbers[i];
        if (isPowerOfTwo(num)) {
            cout << num << " is a power of 2\n";
        } else {
            cout << num << " is NOT a power of 2\n";
        }
    }
    
    return 0;
}
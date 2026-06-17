#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <iomanip>

using namespace std;

bool isValidBinary(const string& s) {
    if (s.empty()) return false;
    for (char c : s) {
        if (c != '0' && c != '1') return false;
    }
    return true;
}

int binaryToDecimal(const string& binary) {
    int decimal = 0;
    for (char c : binary) {
        decimal = (decimal << 1) + (c - '0');
    }
    return decimal;
}

string decimalToBinary(int decimal) {
    if (decimal == 0) return "0";
    string binary;
    while (decimal > 0) {
        binary.push_back((decimal & 1) ? '1' : '0');
        decimal >>= 1;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

string binaryToHex(const string& binary) {
    int decimal = binaryToDecimal(binary);
    if (decimal == 0) return "0";
    stringstream ss;
    ss << hex << uppercase << decimal;
    return ss.str();
}

string binaryToOctal(const string& binary) {
    int decimal = binaryToDecimal(binary);
    if (decimal == 0) return "0";
    string octal;
    while (decimal > 0) {
        octal.push_back('0' + (decimal & 7));
        decimal >>= 3;
    }
    reverse(octal.begin(), octal.end());
    return octal;
}

int main() {
    int choice = 0;
    while (choice != 5) {
        cout << "\nBinary Conversion Calculator\n";
        cout << "1. Decimal to Binary\n";
        cout << "2. Binary to Decimal\n";
        cout << "3. Binary to Hexadecimal\n";
        cout << "4. Binary to Octal\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            int decimal;
            cout << "Enter a decimal number: ";
            cin >> decimal;
            cout << "Binary: " << decimalToBinary(decimal) << "\n";
        } else if (choice >= 2 && choice <= 4) {
            string binary;
            cout << "Enter a binary number: ";
            cin >> binary;
            if (!isValidBinary(binary)) {
                cout << "Invalid binary input. Use only 0 and 1.\n";
                continue;
            }
            if (choice == 2) {
                cout << "Decimal: " << binaryToDecimal(binary) << "\n";
            } else if (choice == 3) {
                cout << "Hexadecimal: " << binaryToHex(binary) << "\n";
            } else {
                cout << "Octal: " << binaryToOctal(binary) << "\n";
            }
        } else if (choice == 5) {
            cout << "Exiting calculator.\n";
        } else {
            cout << "Invalid option, please choose 1-5.\n";
        }
    }

    return 0;
}
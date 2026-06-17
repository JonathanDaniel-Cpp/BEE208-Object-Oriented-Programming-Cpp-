#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char ch;
    
    // Get character from user
    cout << "Enter a character: ";
    cin >> ch;
    
    // Check if it is an uppercase letter using isupper() and logical AND
    if (isalpha(ch) && isupper(ch)) {
        cout << "Uppercase letter" << endl;
    } else {
        cout << "Not an uppercase letter" << endl;
    }
    
    return 0;
}
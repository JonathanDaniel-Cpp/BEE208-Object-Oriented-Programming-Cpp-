#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    
    // Get string from user
    cout << "Enter a string: ";
    getline(cin, str);
    
    // Check if string contains the character 'a'
    if (str.find('a') != string::npos) {
        cout << "Contains 'a'" << endl;
    } else {
        cout << "Does not contain 'a'" << endl;
    }
    
    return 0;
}
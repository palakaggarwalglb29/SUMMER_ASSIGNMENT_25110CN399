#include <iostream>
#include <string>
using namespace std;
char findFirstRepeatingNested(const string& str) {
    int n = str.length();
    
    // Outer loop checks each character starting from the second character
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            // If character matches any previous character, it's a duplicate
            if (str[i] == str[j]) {
                return str[i];
            }
        }
    }
    // Return a null terminator or flag if no repeating character is found
    return '\0'; 
}

int main() {
    string text = "abcdefd";
    char result = findFirstRepeatingNested(text);
    
    if (result != '\0') {
        cout << "First repeating character: " << result << endl;
    } else {
        cout << "No repeating character found." << endl;
    }
    return 0;
}

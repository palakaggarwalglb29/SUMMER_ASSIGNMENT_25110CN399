#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "swiss";
    bool found = false;

    // Outer loop picks each character one by one
    for (int i = 0; i < str.length(); i++) {
        bool isRepeating = false;

        // Inner loop checks the rest of the string for duplicates
        for (int j = 0; j < str.length(); j++) {
            // If the characters match and it's not the exact same index
            if (str[i] == str[j] && i != j) {
                isRepeating = true;
                break; // Stop checking further for this character
            }
        }

        // If the character did not repeat, it is our first unique character
        if (!isRepeating) {
            cout << "The first non-repeating character is: " << str[i] << endl;
            found = true;
            break; // Exit immediately to only get the FIRST one
        }
    }

    if (!found) {
        cout << "All characters are repeating or the string is empty." << endl;
    }

    
}

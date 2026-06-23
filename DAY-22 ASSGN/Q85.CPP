#include <iostream>
#include <string>

using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        // If characters mismatch, it is not a palindrome
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    // If the loop finishes without mismatches, it is a palindrome
    return true;
}

int main() {
    string userInput;

    cout << "Enter a string: ";
    cin >> userInput;

    if (isPalindrome(userInput)) {
        cout << "\"" << userInput << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << userInput << "\" is not a palindrome." << endl;
    }

    
}

#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;

    // Get input strings from the user
    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    cout << "Common characters: ";
    
    // Loop through each character of the first string
    for (int i = 0; i < str1.length(); i++) {
        char ch = str1[i];

        // Check if the current character exists in the second string
        size_t found_index = str2.find(ch);

        // If found (index is not equal to string::npos)
        if (found_index != string::npos) {
            cout << ch << " "; // Print the common character
            
            // Erase the character from str2 so it isn't matched again
            str2.erase(found_index, 1); 
        }
    }

    cout <<endl;
    return 0;
}

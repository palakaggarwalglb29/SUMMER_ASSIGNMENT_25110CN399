#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Function to find the maximum occurring character
char getMaxOccurringChar(const string& str) {
    // Create a frequency array for all 256 ASCII characters initialized to 0
    vector<int> freq(256, 0);

    // Step 1: Populate the frequency array
    for (char ch : str) {
        // Cast to unsigned char to prevent negative indexing with extended ASCII
        freq[static_cast<unsigned char>(ch)]++;
    }

    int maxCount = -1;
    char maxChar = ' ';

    // Step 2: Iterate through the string to find the highest frequency character.
    // This maintains the original order of appearance for ties.
    for (char ch : str) {
        unsigned char uCh = static_cast<unsigned char>(ch);
        if (freq[uCh] > maxCount) {
            maxCount = freq[uCh];
            maxChar = ch;
        }
    }

    return maxChar;
}

int main() {
    string inputStr;

    cout << "Enter a string: ";
    getline(cin, inputStr);

    if (inputStr.empty()) {
        cout << "The string is empty." << endl;
        return 0;
    }

    char result = getMaxOccurringChar(inputStr);
    cout << "The maximum occurring character is: '" << result << "'" << endl;

    return 0;
}

#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    string text;
    
    // Read the entire line of text, including spaces
    cout << "Enter a string: ";
    getline(cin, text);
    
    // Map to store character frequencies (Key: char, Value: int)
    map<char, int> frequencyMap;
    
    // Traverse the string and increment the count for each character
    for (char ch : text) {
        frequencyMap[ch]++;
    }
    
    // Display the results
    cout << "\nCharacter Frequencies (Sorted Order):\n";
    for (const auto& pair : frequencyMap) {
        // Special formatting to make spaces visible in the output
        if (pair.first == ' ') {
            cout << "' ' (space) : " << pair.second << "\n";
        } else {
            cout << "'" << pair.first << "' : " << pair.second << "\n";
        }
    }
    
    
}

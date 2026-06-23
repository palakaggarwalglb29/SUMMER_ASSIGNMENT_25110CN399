#include <iostream>
#include <string>
#include <sstream> // Required for stringstream

using namespace std;

int main() {
    string sentence;
    int wordCount = 0;
    string word;

    // Get the full sentence from the user
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Put the string into a stream
    stringstream ss(sentence);

    // Extract words one by one and increase the count
    while (ss >> word) {
        wordCount++;
    }

    // Print the final total
    cout << "Number of words: " << wordCount << endl;

    
}

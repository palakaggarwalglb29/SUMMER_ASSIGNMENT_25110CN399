#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Required for std::sort
using namespace std;
int main() {
    // 1. Create a vector of words
    vector<string> words = {"banana", "pie", "apple", "kiwi", "strawberry"};

    cout << "Original words:\n";
    for (const string& word : words) {
        cout << word << " ";
    }
    cout << "\n\n";

    // 2. Sort words by length using a lambda function
    sort(words.begin(), words.end(), [](const string& a, const string& b) {
        return a.length() < b.length(); 
    });

    // 3. Print the sorted list
    cout << "Sorted by length (shortest to longest):\n";
    for (const string& word : words) {
        cout << word << " (" << word.length() << ") ";
    }
    cout << "\n";

    return 0;
}

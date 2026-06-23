#include <iostream>
#include <string>
#include <algorithm> // Required for sort

using namespace std;

bool isAnagramSorting(string str1, string str2) {
    // If lengths are different, they cannot be anagrams
    if (str1.length() != str2.length()) {
        return false;
    }

    // Sort both strings alphabetically
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings
    return str1 == str2;
}

int main() {
    string str1 = "triangle";
    string str2 = "integral";

    if (isAnagramSorting(str1, str2)) {
        cout << "Strings are anagrams." << endl;
    } else {
        cout << "Strings are NOT anagrams." << endl;
    }

    
}

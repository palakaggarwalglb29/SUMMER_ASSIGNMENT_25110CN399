#include <iostream>
#include <string>
#include <algorithm> // Required for std::remove
using namespace std;
int main() {
    string str;

    // Get the full line of text including spaces from the user
    cout << "Enter a string: ";
    getline(cin, str);

    // Apply the Erase-Remove Idiom to remove all spaces
    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    // Display the modified string
    cout << "String after removing spaces: " << str << endl;

    
}

#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Required for std::sort
using namespace std;
int main() {
    int numberOfNames;

    // Ask the user for the number of names
    cout << "Enter the number of names you want to sort: ";
    cin >> numberOfNames;

    // Clear the input buffer to allow std::getline to work correctly
    cin.ignore();

    // Create a vector to store the names
    vector<string> names;
    string tempName;

    cout << "Enter " << numberOfNames << " names (one per line):\n";
    for (int i = 0; i < numberOfNames; ++i) {
        getline(cin, tempName);
        names.push_back(tempName);
    }

    // Sort the names alphabetically using the STL sort function
    sort(names.begin(), names.end());

    // Display the sorted names
cout << "\nNames in Alphabetical Order:\n";
    for (const string& name : names) {
        cout << name << "\n";
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int n;
    double sum = 0.0;
    double average = 0.0;

    // size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Validate array size input
    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    // Declare array of size n
    double arr[n];

    // Input array elements from the user
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate sum of all elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate average
    average = sum / n;

    // Display the output
    cout << "\n-----------------------------" << endl;
    cout << "Sum of array elements     = " << sum << endl;
    cout << "Average of array elements = " << average << endl;
    cout << "-----------------------------" << endl;

    
}

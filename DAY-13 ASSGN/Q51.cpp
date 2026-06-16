#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Enter the number of elements: ";
    cin >> n;

    // if invalid or empty array size
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Assume the first element is both the smallest and largest
    int smallest = arr[0];
    int largest = arr[0];

    // Traverse the array to compare elements
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update smallest
        }
        if (arr[i] > largest) {
            largest = arr[i];  // Update largest
        }
    }

    
    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;

    return 0;
}

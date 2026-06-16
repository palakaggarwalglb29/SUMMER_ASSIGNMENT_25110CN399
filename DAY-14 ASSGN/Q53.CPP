#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    // Loop through every element in the array sequentially
    for (int i = 0; i < size; i++) {
        // If the current element matches the target, return its index
        if (arr[i] == target) {
            return i; 
        }
    }
    // Return -1 if the element is not found after checking the whole array
    return -1; 
}

int main() {
    int size, target;

    // Get the size of the array from the user
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];

    // Input array elements
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Get the target value to search for
    cout << "Enter the number to search for: ";
    cin >> target;

    // Call the linear search function
    int result = linearSearch(arr, size, target);

    // result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    
}

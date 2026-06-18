#include <iostream>
using namespace std;

// Function that returns the index of the target if found, otherwise -1
int binarySearchIterative(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        // Safe midpoint calculation to prevent integer overflow
        int mid = low + (high - low) / 2;

        // Check if the target is at the middle
        if (arr[mid] == target) {
            return mid; 
        }
        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }
    // Return -1 if the element is not present in the array
    return -1;
}

int main() {
    // Array must be sorted for binary search to work
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearchIterative(arr, size, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    
}

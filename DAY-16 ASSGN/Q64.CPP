#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 5, 2, 7, 4, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int newSize = 0; // Tracks the count of unique elements

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        
        // Check if the current element already exists in the unique part
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        
        // If it's not a duplicate, shift it to the next available unique slot
        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    // Output the array containing only unique elements
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
}

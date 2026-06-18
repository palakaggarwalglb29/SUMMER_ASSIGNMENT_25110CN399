#include <iostream>
using namespace std;

// Function to perform Bubble Sort on an array
void bubbleSort(int arr[], int n) {
    bool swapped;
    
    // Outer loop for the number of passes
    for (int i = 0; i < n - 1; i++) {
        swapped = false; // Reset the flag for each pass
        
        // Inner loop to compare adjacent elements
        // The last i elements are already sorted, so we skip them
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the current element is greater than the next element
            if (arr[j] > arr[j + 1]) {
                // Utilizing the standard built-in swap function
                swap(arr[j], arr[j + 1]);
                swapped = true; // Set flag to true indicating a swap occurred
            }
        }
        
        // Optimization: If no elements were swapped in this pass, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

// Function to print utility elements of the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements
    
    cout << "Original array: \n";
    printArray(arr, n);
    
    // Call the bubble sort function
    bubbleSort(arr, n);
    
    cout << "Sorted array in ascending order: \n";
    printArray(arr, n);
    
    
}

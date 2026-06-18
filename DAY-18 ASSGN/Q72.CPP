#include <iostream>
using namespace std;
int main() {
    int arr[] = {45, 12, 85, 32, 89, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Outer loop to iterate through the entire array
    for (int i = 0; i < n - 1; i++) {
        // Inner loop to compare adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the current element is smaller than the next element
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array (Descending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    
}

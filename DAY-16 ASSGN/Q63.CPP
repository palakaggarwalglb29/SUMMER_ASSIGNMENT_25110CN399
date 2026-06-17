#include <iostream>
using namespace std;

// Function to find and print the pair with the target sum
bool findPairWithSum(int arr[], int size, int targetSum) {
    // Outer loop selects the first element of the pair
    for (int i = 0; i < size; i++) {
        // Inner loop selects the second element from the remaining elements
        for (int j = i + 1; j < size; j++) {
            // Check if the sum of both elements matches the target
            if (arr[i] + arr[j] == targetSum) {
                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
                return true; // Stop searching once a valid pair is found
            }
        }
    }
    return false; // Return false if no pair matches the target sum
}

int main() {
    int arr[] = {1, 6, -2, 3, 5};
    int targetSum = 4;
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Searching for a pair that sums up to " << targetSum << "...\n";
    
    if (!findPairWithSum(arr, size, targetSum)) {
        cout << "No pair with the given sum exists in the array." << endl;
    }

    
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size." << std::endl;
        return 0;
    }

    int arr[100]; // Creates a static array with a fixed maximum capacity
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxElement = arr[0];
    int maxCount = 0;

    // Nested loops to count the frequency of each element
    for (int i = 0; i < n; i++) {
        int currentCount = 0;
        
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                currentCount++;
            }
        }

        // Update maximum frequency and the corresponding element
        if (currentCount > maxCount) {
            maxCount = currentCount;
            maxElement = arr[i];
        }
    }

    cout << "Element with maximum frequency: " << maxElement << std::endl;
    cout << "Frequency: " << maxCount << std::endl;

    
}

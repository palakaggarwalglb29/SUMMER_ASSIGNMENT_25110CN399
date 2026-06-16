#include <iostream>
using namespace std;

int main() {
// PRE DEFINED ARRAY
    int arr[] = {2, 4, 6, 4, 8, 4, 10};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculates total elements
    
    int target = 4; // Element we want to find
    int count = 0;  // Variable to store the frequency

    // Loop through the array
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++; // Increment count if element matches target
        }
    }

    cout << "The element " << target << " appears " << count << " times.";

    
}

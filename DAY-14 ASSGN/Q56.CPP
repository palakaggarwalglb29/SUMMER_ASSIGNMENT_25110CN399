#include <iostream>
using namespace std;
int main() {
    int arr[] = {3, 5, 6, 11, 5, 7, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    std::cout << "Duplicate elements: ";
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                // To avoid printing the same duplicate multiple times
                // We check if we already processed it earlier
                bool alreadyPrinted = false;
                for (int k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) {
                        alreadyPrinted = true;
                        break;
                    }
                }
                if (alreadyPrinted) {
                    cout << arr[i] << " ";
                }
                break; // Break internal loop once match is found
            }
        }
    }
    

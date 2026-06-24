#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8, 10};
    vector<int> merged;
    int i = 0, j = 0;

    // Merge using two pointers
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) merged.push_back(arr1[i++]);
        else merged.push_back(arr2[j++]);
    }
    // Append remaining elements
    while (i < arr1.size()) merged.push_back(arr1[i++]);
    while (j < arr2.size()) merged.push_back(arr2[j++]);

    cout << "Merged Array: ";
    for (int x : merged) cout << x << " ";
    
}

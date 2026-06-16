#include <iostream>
using namespace std;

int main() {
    int total_numbers, num;
    int even_count = 0;
    int odd_count = 0;

    cout << "Enter the total number of elements you want to check: ";
    cin >> total_numbers;

    cout << "Enter " << total_numbers << " integers:\n";

    // Loop directly asks for the input and checks it
    for (int i = 0; i < total_numbers; ++i) {
        cin >> num;
        
        // If remainder is 0, it's an even number
        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    
    
    cout << "Total Even numbers: " << even_count << endl;
    cout << "Total Odd numbers: " << odd_count << endl;

    
}

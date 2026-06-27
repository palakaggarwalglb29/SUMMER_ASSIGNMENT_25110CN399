#include <iostream>

using namespace std;

int main() {
    int age;

    // Prompt user for input
    cout << "========================================" << endl;
    cout << "       VOTING ELIGIBILITY SYSTEM        " << endl;
    cout << "========================================" << endl;
    cout << "Enter your age: ";
    cin >> age;

    // Check voting eligibility condition (Age must be 18 or older)
    if (age >= 18) {
        cout << "\nSuccess: You are ELIGIBLE to vote!" << endl;
        cout << "Please cast your vote responsibly." << endl;
    } 
    else if (age < 0) {
        cout << "\nError: Invalid age entered! Age cannot be negative." << endl;
    } 
    else {
        cout << "\nStatus: You are NOT eligible to vote." << endl;
        cout << "You need to wait " << (18 - age) << " more year(s) to vote." << endl;
    }

    cout << "========================================" << endl;
    
}

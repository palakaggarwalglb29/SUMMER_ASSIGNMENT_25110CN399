#include <iostream>
using namespace std;

// Function to display the main ATM options
void showMenu() {
    cout << "\n========== ATM MENU ==========" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;
    cout << "==============================" << endl;
    cout << "Please choose an option (1-4): ";
}

int main() {
    // Initializing variables
    int choice;
    double balance = 500.00; // Default starting balance
    double amount;
    int enteredPin;
    const int CORRECT_PIN = 1234; // Default PIN for authentication

    cout << "Welcome to the Virtual ATM System!" << endl;
    
    // Simple PIN Verification
    cout << "Enter your 4-digit PIN: ";
    cin >> enteredPin;

    if (enteredPin != CORRECT_PIN) {
        cout << "Invalid PIN. Access Denied." << endl;
        return 0; // Terminate the program if PIN is wrong
    }

    // Main loop for the ATM interface
    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                // Check Balance
                cout << "\nYour current balance is: $" << balance << endl;
                break;

            case 2:
                // Deposit Money
                cout << "\nEnter the amount to deposit: $";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "$" << amount << " deposited successfully." << endl;
                } else {
                    cout << "Invalid deposit amount." << endl;
                }
                break;

            case 3:
                // Withdraw Money
                cout << "\nEnter the amount to withdraw: $";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient funds! Your balance is only $" << balance << endl;
                } else if (amount <= 0) {
                    cout << "Invalid withdrawal amount." << endl;
                } else {
                    balance -= amount;
                    cout << "$" << amount << " withdrawn successfully." << endl;
                }
                break;

            case 4:
                // Exit
                cout << "\nThank you for using our ATM. Goodbye!" << endl;
                break;

            default:
                cout << "\nInvalid choice. Please select a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks[5];
    float totalMarks;
    float percentage;
    string grade;

public:
    // Function to collect student details
    void inputDetails() {
        cout << "\n========================================\n";
        cout << "         ENTER STUDENT DETAILS          \n";
        cout << "========================================\n";
        cout << "Enter Student Full Name: ";
        cin.ignore(); // Clears buffer to accept full names with spaces
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "\nEnter Marks for 5 Subjects (out of 100):\n";
        string subjects[] = {"Mathematics", "Physics", "Chemistry", "English", "Computer Science"};
        
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            do {
                cout << subjects[i] << ": ";
                cin >> marks[i];
                if (marks[i] < 0 || marks[i] > 100) {
                    cout << "Invalid marks! Please enter a value between 0 and 100.\n";
                }
            } while (marks[i] < 0 || marks[i] > 100);
            
            totalMarks += marks[i];
        }
        
        calculateResults();
    }

    // Function to calculate percentage and grade
    void calculateResults() {
        percentage = (totalMarks / 500.0f) * 100.0f;

        // Determine grade based on percentage criteria
        if (percentage >= 90) grade = "A+ (Excellent)";
        else if (percentage >= 80) grade = "A (Very Good)";
        else if (percentage >= 70) grade = "B (Good)";
        else if (percentage >= 60) grade = "C (Satisfactory)";
        else if (percentage >= 50) grade = "D (Pass)";
        else grade = "F (Fail)";
    }

    // Function to print the formatted report card
    void displayMarksheet() const {
        cout << "\n\n==================================================\n";
        cout << "               OFFICIAL MARKSHEET                 \n";
        cout << "==================================================\n";
        cout << left << setw(15) << "Name:" << name << "\n";
        cout << left << setw(15) << "Roll Number:" << rollNumber << "\n";
        cout << "--------------------------------------------------\n";
        cout << left << setw(25) << "SUBJECT" << "MARKS OBTAINED\n";
        cout << "--------------------------------------------------\n";
        
        string subjects[] = {"Mathematics", "Physics", "Chemistry", "English", "Computer Science"};
        for (int i = 0; i < 5; i++) {
            cout << left << setw(25) << subjects[i] << marks[i] << "/100\n";
        }
        
        cout << "--------------------------------------------------\n";
        cout << fixed << setprecision(2); // Sets decimal output to 2 places
        cout << left << setw(25) << "Total Marks:" << totalMarks << " / 500\n";
        cout << left << setw(25) << "Percentage:" << percentage << "%\n";
        cout << left << setw(25) << "Final Grade:" << grade << "\n";
        cout << "==================================================\n\n";
    }
};

int main() {
    Student s;
    int choice;

    do {
        cout << "========================================\n";
        cout << "       MARKSHEET GENERATION SYSTEM      \n";
        cout << "========================================\n";
        cout << "1. Generate New Marksheet\n";
        cout << "2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s.inputDetails();
                s.displayMarksheet();
                break;
            case 2:
                cout << "\nThank you for using the system. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid selection. Try again.\n\n";
        }
    } while (choice != 2);

    return 0;
}

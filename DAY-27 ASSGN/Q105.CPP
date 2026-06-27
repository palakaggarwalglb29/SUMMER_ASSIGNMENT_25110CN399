#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to hold student details
struct Student {
    int rollNo;
    string name;
    float marks;
};

// Function declarations
void addStudent(vector<Student> &students);
void displayStudents(const vector<Student> &students);
void searchStudent(const vector<Student> &students);
void deleteStudent(vector<Student> &students);

int main() {
    vector<Student> students; // Vector container to dynamically store records
    int choice;

    do {
        cout << "\n====================================";
        cout << "\n STUDENT RECORD MANAGEMENT SYSTEM";
        cout << "\n====================================";
        cout << "\n1. Add Student Record";
        cout << "\n2. Display All Records";
        cout << "\n3. Search Student by Roll No";
        cout << "\n4. Delete Student Record";
        cout << "\n5. Exit";
        cout << "\n\nEnter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students);
                break;
            case 2:
                displayStudents(students);
                break;
            case 3:
                searchStudent(students);
                break;
            case 4:
                deleteStudent(students);
                break;
            case 5:
                cout << "\nExiting program. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please enter a number between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}

// Function to add a new student record
void addStudent(vector<Student> &students) {
    Student newStudent;
    
    cout << "\nEnter Roll Number: ";
    cin >> newStudent.rollNo;
    
    // Check if roll number already exists to prevent duplicate entries
    for (const auto &s : students) {
        if (s.rollNo == newStudent.rollNo) {
            cout << "Error: A student with Roll Number " << newStudent.rollNo << " already exists!\n";
            return;
        }
    }

    cin.ignore(); // Clear the input buffer loop
    cout << "Enter Full Name: ";
    getline(cin, newStudent.name); // Keeps full name including spaces
    
    cout << "Enter Total Marks: ";
    cin >> newStudent.marks;

    students.push_back(newStudent); // Save record inside vector
    cout << "\nRecord added successfully!\n";
}

// Function to print all student records
void displayStudents(const vector<Student> &students) {
    if (students.empty()) {
        cout << "\nNo records found. The database is empty!\n";
        return;
    }

    cout << "\n------------------------------------------------";
    cout << "\nRoll No\t\tName\t\t\tMarks";
    cout << "\n------------------------------------------------\n";
    for (const auto &s : students) {
        cout << s.rollNo << "\t\t" << s.name << "\t\t" << s.marks << "\n";
    }
    cout << "------------------------------------------------\n";
}

// Function to search a record by roll number
void searchStudent(const vector<Student> &students) {
    if (students.empty()) {
        cout << "\nNo records available to search.\n";
        return;
    }

    int roll;
    cout << "\nEnter Roll Number to search: ";
    cin >> roll;

    for (const auto &s : students) {
        if (s.rollNo == roll) {
            cout << "\nRecord Found!";
            cout << "\nRoll Number: " << s.rollNo;
            cout << "\nName:        " << s.name;
            cout << "\nMarks:       " << s.marks << "\n";
            return;
        }
    }
    cout << "\nStudent with Roll Number " << roll << " not found.\n";
}

// Function to delete a record by roll number
void deleteStudent(vector<Student> &students) {
    if (students.empty()) {
        cout << "\nNo records available to delete.\n";
        return;
    }

    int roll;
    cout << "\nEnter Roll Number to delete: ";
    cin >> roll;

    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->rollNo == roll) {
            students.erase(it); // Remove element from vector array
            cout << "\nRecord deleted successfully!\n";
            return;
        }
    }
    cout << "\nStudent with Roll Number " << roll << " not found.\n";
}

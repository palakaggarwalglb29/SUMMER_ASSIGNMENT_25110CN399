#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Class to represent an individual employee
class Employee {
private:
    int id;
    string name;
    string department;
    double salary;

public:
    // Constructor to easily initialize data
    Employee(int empId, string empName, string empDept, double empSalary) {
        id = empId;
        name = empName;
        department = empDept;
        salary = empSalary;
    }

    // Getter function for Employee ID
    int getId() const { 
        return id; 
    }

    // Method to display a single employee's data
    void displayEmployee() const {
        cout << "ID: " << id 
             << " | Name: " << name 
             << " | Department: " << department 
             << " | Salary: $" << salary << endl;
    }
};

int main() {
    vector<Employee> employeeList; // Vector container to hold employee objects
    int choice;

    do {
        // Main Console Menu Interface
        cout << "\n=== EMPLOYEE MANAGEMENT SYSTEM ===" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display All Employees" << endl;
        cout << "3. Search Employee by ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int id;
                string name, dept;
                double salary;

                cout << "\nEnter Employee ID: ";
                cin >> id;
                cin.ignore(); // Clears input buffer before grabbing strings

                cout << "Enter Employee Name: ";
                getline(cin, name);

                cout << "Enter Department: ";
                getline(cin, dept);

                cout << "Enter Salary: ";
                cin >> salary;

                // Create record and push it to our vector list
                Employee emp(id, name, dept, salary);
                employeeList.push_back(emp);
                cout << "\nEmployee added successfully!" << endl;
                break;
            }
            case 2: {
                if (employeeList.empty()) {
                    cout << "\nNo records found. The database is empty." << endl;
                } else {
                    cout << "\n--- All Employee Records ---" << endl;
                    for (const auto& emp : employeeList) {
                        emp.displayEmployee();
                    }
                }
                break;
            }
            case 3: {
                if (employeeList.empty()) {
                    cout << "\nNo records available to search." << endl;
                    break;
                }

                int searchId;
                bool found = false;
                cout << "\nEnter Employee ID to search: ";
                cin >> searchId;

                for (const auto& emp : employeeList) {
                    if (emp.getId() == searchId) {
                        cout << "\nRecord Found:" << endl;
                        emp.displayEmployee();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "\nEmployee with ID " << searchId << " not found." << endl;
                }
                break;
            }
            case 4:
                cout << "\nExiting program. Thank you!" << endl;
                break;

            default:
                cout << "\nInvalid choice! Please choose between 1 and 4." << endl;
        }
    } while (choice != 4);

    
}

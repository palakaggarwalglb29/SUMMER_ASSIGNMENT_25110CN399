#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Class to manage individual employee details and salary calculations
class Employee {
private:
    int id;
    string name;
    string designation;
    double baseSalary;
    double allowance;
    double taxDeduction;
    double netSalary;

public:
    // Constructor to initialize employee data
    Employee(int empId, string empName, string empDesig, double salary) {
        id = empId;
        name = empName;
        designation = empDesig;
        baseSalary = salary;
        
        // Automated payroll calculations: 10% allowance, 5% tax deduction
        allowance = baseSalary * 0.10;
        taxDeduction = baseSalary * 0.05;
        netSalary = (baseSalary + allowance) - taxDeduction;
    }

    // Getter to check employee ID
    int getId() const {
        return id;
    }

    // Function to print a formatted monthly payslip
    void displayPaySlip() const {
        cout << "\n====================================\n";
        cout << "         MONTHLY PAYSLIP            \n";
        cout << "====================================\n";
        cout << "Employee ID   : " << id << "\n";
        cout << "Name          : " << name << "\n";
        cout << "Designation   : " << designation << "\n";
        cout << "------------------------------------\n";
        cout << "Base Salary   : $" << baseSalary << "\n";
        cout << "Allowance(10%): +$" << allowance << "\n";
        cout << "Tax Ded. (5%) : -$" << taxDeduction << "\n";
        cout << "------------------------------------\n";
        cout << "NET SALARY    : $" << netSalary << "\n";
        cout << "====================================\n";
    }
};

int main() {
    vector<Employee> employeeList;
    int choice;

    // Interactive Menu Loop
    do {
        cout << "\n=== SALARY MANAGEMENT SYSTEM ===\n";
        cout << "1. Add New Employee Record\n";
        cout << "2. Generate Employee Payslip\n";
        cout << "3. Exit Program\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string name, designation;
            double salary;

            cout << "\nEnter Employee ID: ";
            cin >> id;
            cin.ignore(); // Clears input buffer before reading strings
            
            cout << "Enter Employee Name: ";
            getline(cin, name);
            
            cout << "Enter Designation: ";
            getline(cin, designation);
            
            cout << "Enter Base Salary ($): ";
            cin >> salary;

            // Store the new record into our list
            employeeList.push_back(Employee(id, name, designation, salary));
            cout << "\n✔ Record added successfully!\n";

        } else if (choice == 2) {
            if (employeeList.empty()) {
                cout << "\n⚠ No employee records found. Add a record first!\n";
                continue;
            }

            int searchId;
            bool found = false;
            cout << "\nEnter Employee ID to generate payslip: ";
            cin >> searchId;

            // Search for the employee by ID
            for (const auto& emp : employeeList) {
                if (emp.getId() == searchId) {
                    emp.displayPaySlip();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\n❌ Employee ID not found!\n";
            }

        } else if (choice == 3) {
            cout << "\nThank you for using the Salary Management System!\n";
        } else {
            cout << "\n❌ Invalid choice! Please select 1, 2, or 3.\n";
        }

    } while (choice != 3);

    
}

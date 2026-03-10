#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double empSalary;

public:
    void setEmpID(int id) {
        empID = id;
    }

    void setEmpName(string name) {
        empName = name;
    }

    void setEmpSalary(double salary) {
        empSalary = salary;
    }

    int getEmpID() const {
        return empID;
    }

    string getEmpName() const {
        return empName;
    }

    double getEmpSalary() const {
        return empSalary;
    }

    double calculateGrossSalary() const {
        double bonus;

        if(empSalary <= 5000)
            bonus = empSalary * 0.10;
        else if(empSalary <= 10000)
            bonus = empSalary * 0.15;
        else
            bonus = empSalary * 0.20;

        return empSalary + bonus;
    }

    
    void displayEmployeeDetails() const {
        cout << "\n---- Employee Details ----\n";
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << empSalary << endl;
        cout << "Gross Salary: " << calculateGrossSalary() << endl;
    }
};

int main() {
    Employee emp;
    int choice;
    bool employeeAdded = false;

    do {
        cout << "\n===== Employee Payroll Menu =====\n";
        cout << "1. Add New Employee\n";
        cout << "2. Calculate Gross Salary\n";
        cout << "3. Display Employee Details\n";
        cout << "4. Update Employee Information\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1: {
                int id;
                string name;
                double salary;

                cout << "Enter Employee ID: ";
                cin >> id;

                cout << "Enter Employee Name: ";
                cin >> ws;
                getline(cin, name);

                cout << "Enter Basic Salary: ";
                cin >> salary;

                emp.setEmpID(id);
                emp.setEmpName(name);
                emp.setEmpSalary(salary);

                employeeAdded = true;
                cout << "Employee added successfully!\n";
                break;
            }

            case 2:
                if(employeeAdded)
                    cout << "Gross Salary: "
                         << emp.calculateGrossSalary() << endl;
                else
                    cout << "No employee found!\n";
                break;

            case 3:
                if(employeeAdded)
                    emp.displayEmployeeDetails();
                else
                    cout << "No employee found!\n";
                break;

            case 4:
                if(employeeAdded) {
                    double newSalary;
                    cout << "Enter new salary: ";
                    cin >> newSalary;
                    emp.setEmpSalary(newSalary);
                    cout << "Salary updated successfully!\n";
                } else {
                    cout << "No employee found!\n";
                }
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 5);

    return 0;
}


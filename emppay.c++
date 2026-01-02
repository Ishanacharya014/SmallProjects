#include <iostream>
using namespace std;

class Employee {
    string name;
    int employeeId;
    double basicSalary;
    double hra, da, tax, netSalary;

public:
    void inputDetails() {
        cout << "Enter employee name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter employee ID: ";
        cin >> employeeId;

        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    void calculateSalary() {
        hra = basicSalary * 0.20;   // 20% HRA
        da  = basicSalary * 0.10;   // 10% DA
        tax = basicSalary * 0.05;   // 5% Tax

        netSalary = basicSalary + hra + da - tax;
    }

    void displaySalarySlip() {
        cout << "\n----- Salary Slip -----\n";
        cout << "Employee Name : " << name << endl;
        cout << "Employee ID   : " << employeeId << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "HRA (20%)     : " << hra << endl;
        cout << "DA (10%)      : " << da << endl;
        cout << "Tax (5%)      : " << tax << endl;
        cout << "Net Salary    : " << netSalary << endl;
        cout << "-----------------------\n";
    }
};

int main() {
    Employee emp;

    emp.inputDetails();
    emp.calculateSalary();
    emp.displaySalarySlip();

    return 0;
}

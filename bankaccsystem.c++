#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int accountNumber;
    double balance;

public:
    void createAccount() {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    int choice;
    double amount;

    acc.createAccount();

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display Details\n4. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount: ";
                cin >> amount;
                acc.deposit(amount);
                break;

            case 2:
                cout << "Enter amount: ";
                cin >> amount;
                acc.withdraw(amount);
                break;

            case 3:
                acc.display();
                break;
        }
    } while (choice != 4);

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a, b, op;
    char ch = 'y';

    while (ch != 'n') {
        cout << "Enter two integers: ";
        cin >> a >> b;

        cout << "Choose operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "Enter choice: ";
        cin >> op;

        switch (op) {
            case 1:
                cout << "Sum: " << a + b << endl;
                break;
            case 2:
                cout << "Difference: " << a - b << endl;
                break;
            case 3:
                cout << "Product: " << a * b << endl;
                break;
            case 4:
                if (b != 0)
                    cout << "Quotient: " << a / b << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            case 5:
                if (b != 0)
                    cout << "Modulus: " << a % b << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
        cout << "Do you want to continue? (y/n): ";
        cin >> ch;
    }

    return 0;
}

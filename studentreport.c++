#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;
    double marks[5];
    double total, percentage;
    char grade;

public:
    void input() {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> roll;

        for (int i = 0; i < 5; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculate() {
        total = 0;
        for (int i = 0; i < 5; i++)
            total += marks[i];

        percentage = total / 5;

        if (percentage >= 90) grade = 'A';
        else if (percentage >= 80) grade = 'B';
        else if (percentage >= 70) grade = 'C';
        else if (percentage >= 60) grade = 'D';
        else grade = 'F';
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nRoll: " << roll;
        cout << "\nTotal: " << total;
        cout << "\nPercentage: " << percentage;
        cout << "\nGrade: " << grade << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.calculate();
    s.display();
    return 0;
}

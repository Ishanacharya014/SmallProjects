#include <iostream>
using namespace std;

class Book {
    string title;
    string author;
    bool isAvailable;

public:
    Book() {
        isAvailable = true;
    }

    void setBook(string t, string a) {
        title = t;
        author = a;
        isAvailable = true;
    }

    void borrowBook() {
        if (isAvailable) {
            isAvailable = false;
            cout << "Book borrowed successfully.\n";
        } else {
            cout << "Book already borrowed.\n";
        }
    }

    void returnBook() {
        if (!isAvailable) {
            isAvailable = true;
            cout << "Book returned successfully.\n";
        } else {
            cout << "Book was not borrowed.\n";
        }
    }

    void display(int index) {
        cout << index << ". " << title << " by " << author;
        cout << " [" << (isAvailable ? "Available" : "Borrowed") << "]\n";
    }
};

int main() {
    Book books[3];
    books[0].setBook("C++ Basics", "Bjarne");
    books[1].setBook("Data Structures", "Mark");
    books[2].setBook("OOP Concepts", "James");

    int choice, index;

    do {
        cout << "\n1. View Books\n2. Borrow Book\n3. Return Book\n4. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < 3; i++)
                    books[i].display(i + 1);
                break;

            case 2:
                cout << "Enter book number: ";
                cin >> index;
                books[index - 1].borrowBook();
                break;

            case 3:
                cout << "Enter book number: ";
                cin >> index;
                books[index - 1].returnBook();
                break;
        }
    } while (choice != 4);

    return 0;
}


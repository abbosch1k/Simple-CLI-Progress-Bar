#include <iostream>
#include <vector>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    vector<Contact> book;
    int choice;
    do {
        cout << "\n1. Add Contact\n2. Show Contacts\n3. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            Contact c;
            cout << "Name: ";
            cin >> c.name;
            cout << "Phone: ";
            cin >> c.phone;
            book.push_back(c);
        } else if (choice == 2) {
            for (auto &c : book)
                cout << c.name << " - " << c.phone << endl;
        }
    } while (choice != 3);

    return 0;
}
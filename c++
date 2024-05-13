[12:23 pm, 13/5/2024] 𝙺𝚊𝚟𝚣𝚣👻: #include <iostream>
#include <map>
#include <string>

using namespace std;

class ContactManager {
private:
    map<string, string> contacts;

public:
    void addContact(string name, string phoneNumber) {
        contacts[name] = phoneNumber;
        cout << "Contact added: " << name << " - " << phoneNumber << endl;
    }

    void searchContact(string name) {
        if (contacts.find(name) != contacts.end()) {
            cout << "Phone number for " << name << " : " << contacts[name] << endl;
        } else {
            cout << "Contact not found." << endl;
        }
    }

    void displayAllContacts() {
        if (contacts.empty()) {
            cout << "No contacts available." << endl;
            return;
        }
        cout << "List of Contacts:" << endl;
        for (auto const& pair : contacts) {
            cout << pair.first << " - " << pair.second << endl;
        }
    }
};

int main() {
    ContactManager contactManager;

    // Adding some initial contacts
    contactManager.addContact("John", "1234567890");
    contactManager.addContact("Alice", "9876543210");
    contactManager.addContact("Bob", "5551234567");

    int choice;
    string name, phoneNumber;

    do {
        cout << "\nMenu:\n1. Add Contact\n2. Search Contact\n3. Display All Contacts\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter name: ";
                cin >> name;
                cout << "Enter phone number: ";
                cin >> phoneNumber;
                con
[12:25 pm, 13/5/2024] 𝙺𝚊𝚟𝚣𝚣👻: #include <iostream>
#include <map>
#include <string>

using namespace std;

class ContactManager {
private:
    map<string, string> contacts;

public:
    void addContact(string name, string phoneNumber) {
        contacts[name] = phoneNumber;
        cout << "Contact added: " << name << " - " << phoneNumber << endl;
    }

    void searchContact(string name) {
        if (contacts.find(name) != contacts.end()) {
            cout << "Phone number for " << name << " : " << contacts[name] << endl;
        } else {
            cout << "Contact not found." << endl;
        }
    }

    void displayAllContacts() {
        if (contacts.empty()) {
            cout << "No contacts available." << endl;
            return;
        }
        cout << "List of Contacts:" << endl;
        for (auto const& pair : contacts) {
            cout << pair.first << " - " << pair.second << endl;
        }
    }
};

int main() {
    ContactManager contactManager;

    // Adding some initial contacts
    contactManager.addContact("John", "1234567890");
    contactManager.addContact("Alice", "9876543210");
    contactManager.addContact("Bob", "5551234567");

    int choice;
    string name, phoneNumber;

    do {
        cout << "\nMenu:\n1. Add Contact\n2. Search Contact\n3. Display All Contacts\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter name: ";
                cin >> name;
                cout << "Enter phone number: ";
                cin >> phoneNumber;
                contactManager.addContact(name, phoneNumber);
                break;
            case 2:
                cout << "Enter name to search: ";
                cin >> name;
                contactManager.searchContact(name);
                break;
            case 3:
                contactManager.displayAllContacts();
                break;
            case 4:
                cout << "Exiting program.";
                break;
            default:
                cout << "Invalid choice!";
        }
    } while (choice != 4);

    return 0;
}

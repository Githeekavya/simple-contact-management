#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure to hold contact details
struct Contact {
    string name;
    string phone;
    string email;
};

// Class to manage the contacts
class ContactManager {
private:
    vector<Contact> contacts;

public:
    // Function to add a new contact
    void addContact(const string &name, const string &phone, const string &email) {
        Contact newContact;
        newContact.name = name;
        newContact.phone = phone;
        newContact.email = email;
        contacts.push_back(newContact);
        cout << "Contact added successfully!" << endl;
    }

    // Function to display all contacts
    void displayContacts() const {
        if (contacts.empty()) {
            cout << "No contacts available." << endl;
            return;
        }
        for (size_t i = 0; i < contacts.size(); i++) {
            cout << i + 1 << ". Name: " << contacts[i].name << ", Phone: " << contacts[i].phone << ", Email: " << contacts[i].email << endl;
        }
    }

    // Function to search for a contact by name
    void searchContact(const string &name) const {
        bool found = false;
        for (const auto &contact : contacts) {
            if (contact.name == name) {
                cout << "Name: " << contact.name << ", Phone: " << contact.phone << ", Email: " << contact.email << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Contact not found!" << endl;
        }
    }

    // Function to delete a contact by name
    void deleteContact(const string &name) {
        for (auto it = contacts.begin(); it != contacts.end(); ++it) {
            if (it->name == name) {
                contacts.erase(it);
                cout << "Contact deleted successfully!" << endl;
                return;
            }
        }
        cout << "Contact not found!" << endl;
    }
};

// Main function to interact with the contact manager
int main() {
    ContactManager manager;
    int choice;
    string name, phone, email;

    do {
        cout << "\nContact Manager Menu:" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Display All Contacts" << endl;
        cout << "3. Search Contact" << endl;
        cout << "4. Delete Contact" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore newline left in the input buffer

        switch (choice) {
        case 1:
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter phone: ";
            getline(cin, phone);
            cout << "Enter email: ";
            getline(cin, email);
            manager.addContact(name, phone, email);
            break;

        case 2:
            manager.displayContacts();
            break;

        case

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct Contact
{
    std::string name;
    std::string mail;
    std::string phoneNumber;

    Contact(const std::string &name, const std::string &mail, const std::string &phoneNumber)
        : name(name), mail(mail), phoneNumber(phoneNumber)
    {
    }
};
struct Contacts
{
    std::vector<Contact> contacts;
    void addContact(const Contact &contact)
    {
        contacts.push_back(contact);
    }

    void viewContacts()
    {
        std::cout << "Contact Info: \n";
        for (const auto &contact : contacts)
        {
            std::cout << "Name: " << contact.name << ", Email: " << contact.mail << ", Phone: " << contact.phoneNumber
                      << std::endl;
        }
    }

    void deleteContact()
    {
        contacts.erase(contacts.begin(), contacts.end());
        std::cout << "Contact deleted. \n";
    }

    void searchContact()
    {
    }
};

// Function prototypes
// void addContact(std::vector<Contact> &contact);
// void viewContacts(const std::vector<Contact> &contact);
// void deleteContact(std::vector<Contact> &contact);
void searchContact(const std::vector<Contact> &contact);
void displayMenu();

int main()
{
    Contacts myContacts; // Instance of Contacts struct
    std::string name, mail, phoneNumber;
    // Main loop with switch case for menu selection

    std::cout << "Enter your name: " << std::endl;
    std::getline(std::cin, name);
    std::cout << "Enter your mail address: " << std::endl;
    std::getline(std::cin, mail);
    std::cout << "Enter your phone number: " << std::endl;
    std::getline(std::cin, phoneNumber);

    Contact newContact(name, mail, phoneNumber);

    myContacts.addContact(newContact);

    myContacts.viewContacts();

    myContacts.deleteContact();

    return 0;
}
// Implement the functions here

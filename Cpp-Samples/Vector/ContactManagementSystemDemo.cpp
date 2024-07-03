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
    void addContact(const Contact &newcontact)
    {
        contacts.push_back(newcontact);
    }
};

// Function prototypes
void addContact(std::vector<Contact> &contacts);
void viewContacts(const std::vector<Contact> &contacts);
void deleteContact(std::vector<Contact> &contacts);
void searchContact(const std::vector<Contact> &contacts);
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

    std::cout << "Contact Name: " << newContact.name << std::endl;
    std::cout << "Contact Mail: " << newContact.mail << std::endl;
    std::cout << "Contact Phone Number: " << newContact.phoneNumber << std::endl;

    return 0;
}
// Implement the functions here

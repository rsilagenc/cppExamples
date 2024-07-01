#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct Contact
{
    std::string name;
    std::string mail;
    std::string phoneNumber;
};
// Function prototypes
void addContact(std::vector<Contact> &contacts);
void viewContacts(const std::vector<Contact> &contacts);
void deleteContact(std::vector<Contact> &contacts);
void searchContact(const std::vector<Contact> &contacts);
void displayMenu();

int main()
{
    std::vector<Contact> contacts;
    // Main loop with switch case for menu selection
    return 0;
}
// Implement the functions here

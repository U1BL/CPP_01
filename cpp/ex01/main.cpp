#include "PhoneBook.hpp"
#include "Contact.hpp"

int main() {
    PhoneBook PhoneBook;
    std::string command;

    while (1) 
    {
        std::cout << "Enter a command(ADD, SEARCH, EXIT): ";
        std::cin >> command;
        if (command == "EXIT")
            break;
        else if (command == "ADD") {
            PhoneBook.addContact();
        }
        else if (command == "SEARCH") {
            PhoneBook.printContacts();
        }
        else
            std::cout << "Invalid command" << std::endl;
    }

    return 0;
}

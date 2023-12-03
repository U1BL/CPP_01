#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

PhoneBook::PhoneBook() 
{
    contactCount = 0;
}

void PhoneBook::addContact()
{
    std::cout << "Adding contact..." << std::endl;
    Contact contact;
    std::cout << "Enter first name: ";
    std::cin >> contact.name;
    std::cout << "Enter last name: ";
    std::cin >> contact.lastName;
    std::cout << "Enter nickname: ";
    std::cin >> contact.nickname;
    std::cout << "Enter phone number: ";
    std::cin >> contact.phoneNumber;
    std::cout << "Enter darkest secret: ";
    std::cin >> contact.darkestSecret;
    contacts[contactCount] = contact;
    contactCount++;
}

void PhoneBook::printContacts() 
{
    if (contactCount == 0)
    {
        std::cout << "No contacts" << std::endl;
        return;
    }
    else
    {
        std::cout << std::setw(10) << "Index" << "|";
        std::cout << std::setw(10) << "First name" << "|";
        std::cout << std::setw(10) << "Last name" << "|";
        std::cout << std::setw(10) << "Nickname" << std::endl;
        for (int i = 0; i < contactCount; i++)
        {
            std::cout << std::setw(10) << i << "|";
            std::cout << std::setw(10) << contacts[i].name << "|";
            std::cout << std::setw(10) << contacts[i].lastName << "|";
            std::cout << std::setw(10) << contacts[i].nickname << std::endl;
        }
    }

    int index;
    std::cout << "Enter index of the contact you want view: ";
    std::cin >> index;

    if (index < 0 || index >= contactCount)
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    else
    {
        std::cout << "First name: " << contacts[index].name << std::endl;
        std::cout << "Last name: " << contacts[index].lastName << std::endl;
        std::cout << "Nickname: " << contacts[index].nickname << std::endl;
        std::cout << "Phone number: " << contacts[index].phoneNumber << std::endl;
        std::cout << "Darkest secret: " << contacts[index].darkestSecret << std::endl;
    }
}


PhoneBook::~PhoneBook() 
{
    std::cout << "PhoneBook destroyed" << std::endl;
}

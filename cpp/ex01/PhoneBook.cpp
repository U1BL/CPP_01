#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include "Contact.hpp"

PhoneBook::PhoneBook() 
{
    contactCount = 0;
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
        for (int i = 0; i < contactCount; i++) 
        {
            std::cout << contacts[i].name<< std::endl;
        }
    }
}

void PhoneBook::addContact()
{
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
    std::cout << "First name: " << contact.name << std::endl;
    std::cout << "Last name: " << contact.lastName << std::endl;
    std::cout << "Nickname: " << contact.nickname << std::endl;
    std::cout << "Phone number: " << contact.phoneNumber << std::endl;
    std::cout << "Darkest secret: " << contact.darkestSecret << std::endl;
}

PhoneBook::~PhoneBook() 
{
    std::cout << "PhoneBook destroyed" << std::endl;
}
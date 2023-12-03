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
    if (contactCount == 8)
        std::cout << "PhoneBook is full" << std::endl;
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
    contacts[contactCount % 8] = contact;
    contactCount++;
}

void PhoneBook::searchContact() 
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
            if (contacts[i].name.length() > 10)
                {
                    printContact(i);
                    break;
                }
            else if (contacts[i].lastName.length() > 10)
                {
                    printContact(i);
                    break;
                }
            else if (contacts[i].nickname.length() > 10)
                {
                    printContact(i);
                    break;
                }
            std::cout << std::setw(10) << i << "|";
            std::cout << std::setw(10) << contacts[i].name << "|";
            std::cout << std::setw(10) << contacts[i].lastName << "|";
            std::cout << std::setw(10) << contacts[i].nickname << std::endl;
        }
    }

    int index;
    std::cout << "Enter index of the contact you want view: ";
    std::cin >> index;

    if (std::cin.fail() || index < 0 || index >= 9)
    {
        std::cout << "Invalid index." << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
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

void PhoneBook::printContact(int index)
{
    for (int i = index; i < contactCount; i++)
    {
        if (i == 8)
            break;
        std::cout << std::setw(10) << i << "|";
        if (contacts[i].name.length() > 10)
            std::cout << std::setw(10) << contacts[i].name.substr(0, 9) + "." << "|";
        else
            std::cout << std::setw(10) << contacts[i].name << "|";
        
        if (contacts[i].lastName.length() > 10)
            std::cout << std::setw(10) << contacts[i].lastName.substr(0, 9) + "." << "|";
        else
            std::cout << std::setw(10) << contacts[i].lastName << "|";
        
        if (contacts[i].nickname.length() > 10)
            std::cout << std::setw(10) << contacts[i].nickname.substr(0, 9) + "." << std::endl;
        else
            std::cout << std::setw(10) << contacts[i].nickname << std::endl;
    }
}

PhoneBook::~PhoneBook() 
{
    std::cout << "PhoneBook destroyed" << std::endl;
}

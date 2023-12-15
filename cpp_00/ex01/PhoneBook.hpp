#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"
#include <iostream>

class Contact 
{
    public:
    // Constructor
    Contact();

    // Destructor
    ~Contact();
    
    std::string name;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
    
};

class PhoneBook 
{
    private:
    int contactCount;
    public:
    Contact contacts[8];
    // Constructor
    PhoneBook();

    // Destructor
    ~PhoneBook();

    // Function declarations
    void addContact();
    void searchContact();
    void printContact(int index);
};

#endif // PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact() 
{
    std::cout << "Contact created" << std::endl;
}

Contact::~Contact()
{
    std::cout << "IM HERE" << std::endl;
    std::cout << "Contact destroyed" << std::endl;
}

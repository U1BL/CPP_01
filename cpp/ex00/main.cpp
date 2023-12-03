#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::string::size_type i;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    if (str.length() > 0)
    {
        for (i = 0; i < str.length(); i++)
            str[i] = std::toupper(str[i]);
        
        std::cout << str;
    }
    else 
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";    
    return (0);
}
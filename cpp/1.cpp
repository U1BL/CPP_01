#include <iostream>
#include <string>

int main() {
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        if (command == "ADD") {
            std::cout << "Enter command (ADD): ";
        } else if (command == "SEARCH") {
            std::cout << "Enter command (EXIT): ";
        } else if (command == "EXIT") {
            std::cout << "Exiting the phonebook. Goodbye!" << std::endl;
            break;
        } else {
            std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
        }
    }

    return 0;
}
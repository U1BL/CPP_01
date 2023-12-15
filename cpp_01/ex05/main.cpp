#include "Harl.hpp"

int main(int argc, char* argv[]) {
    // Check if the correct number of command line arguments is provided
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
        return 1;
    }

    // Extract command line arguments
    std::string level = argv[1];

    // Perform replacement and create the output file
    Harl harl;
    harl.complain(level);

    return 0;
}
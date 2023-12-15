#include "Replace.hpp"

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2)
{
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open()) {
        std::cerr << "Error: could not open file '" << filename << "'" << std::endl;
        return;
    }

    std::string line;
    std::string content;
    while (std::getline(inputFile, line)) {
        content += line + "\n";
    }
    inputFile.close();

    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos)
    {
    content = content.substr(0, pos) + s2 + content.substr(pos + s1.size());
    pos += s2.size();
    }

    // Create and write to the new file
    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open()) {
        std::cerr << "Error: could not open file '" << filename + ".replace" << "'" << std::endl;
        return;
    }
    outputFile << content;
    outputFile.close();   
}

int main(int argc, char* argv[]) {
    // Check if the correct number of command line arguments is provided
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    // Extract command line arguments
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    // Perform replacement and create the output file
    replaceInFile(filename, s1, s2);

    return 0;
}
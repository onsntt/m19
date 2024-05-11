#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

int main()
{
    std::ifstream buffer;
    std::string address;
    std::cout << "Enter the path to your *.txt\n";
    std::getline(std::cin, address);
    buffer.open(address, std::ios::binary);
    assert(buffer.is_open());
    int pos = 0;
    char part[575];
    while (!buffer.eof())
    {
        buffer.read(part, sizeof(part) - 1);
        part[buffer.gcount()] = 0;
        std::cout << part;
        //pos = buffer.tellg();
        //if (!buffer.eof())
        //{
        //    buffer.seekg(pos - 1);
        //}
    }
    buffer.close();
    std::cout << "\n"
              << "This is it!\n";
}
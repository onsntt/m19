#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
int main()
{
    std::ifstream buffer;
    std::string address;
    std::cout << "Enter the path to your *.png\n";
    std::getline(std::cin, address);
    buffer.open(address, std::ios::binary);
    assert(buffer.is_open());
    char pattern[] = {(char)-119, (char)80, (char)78, (char)71};
    char part[4];
    buffer.read(part, 4);
    buffer.close();
    for (int i = 0; i < 4; i++)
      {
        if (part[i] != pattern[i]) 
        {
            std::cout << "This file is not *.png image\n";
            return 0;
        }
          
      }
      std::cout << "This file is *.png image\n";
}
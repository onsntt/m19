#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
// cherez_zhopu_palochkoy_mode activated
int main()
{
    std::ifstream buffer;
    std::string address;
    std::cout << "Enter the path to your *.txt\n";
    std::getline(std::cin, address);
    buffer.open(address, std::ios::binary);
    assert(buffer.is_open());
    int pos = 0;
    char part[2]; 
while (!buffer.eof())
  {
    buffer.read(part, 2); 
    part[1] = 0;
    std::cout << part;
    pos = buffer.tellg();
    if (!buffer.eof())
      {
        buffer.seekg(pos - 1);
      }
    
  }
  buffer.close();
  std::cout << "\n" << "This is it!\n";
}
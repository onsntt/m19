#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

int main() {
std::ifstream buffer;
std::string str;
std::string address;
std::cout << "Enter the path to your *.txt\n";
std::getline(std::cin, address);
buffer.open(address);
assert (buffer.is_open());

while (!buffer.eof())
  {
    std::getline(buffer, str);
    std::cout << str << "\n";

  }

buffer.close();
std::cout << "We don't like easy ways! Just hardcore! (and, maybe, binary mode)\n" << "Please, open task2-alt.cpp to continue\n";
}
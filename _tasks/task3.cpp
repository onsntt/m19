#include <iostream>
#include <fstream>

int main()
{

    std::ifstream buffer; 

    buffer.open("table.txt"); 
 
    std::string name;
    std::string topName;
    std::string surname;
    std::string topSurname;
    double grandTotal = 0;
    double money;
    double topMoney = 0;
    std::string date;
    while (!buffer.eof())
      {
          buffer >> name >> surname >> money >> date; 
          if (money > topMoney)
            {
                topName = name;
                topSurname = surname;
                topMoney = money;
                grandTotal += money;
            }
      }
    buffer.close();
    std::cout << "Grand Total = " << grandTotal << "\n";
    std::cout << topName << " " << topSurname << " has got maximum salary - " << topMoney << " and was cursed by others.\n";
    
}     
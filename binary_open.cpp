#include <iostream>
#include <fstream>
int main()
{

    std::ifstream bank; // переменная типа ifstream с именем bank

    bank.open("C:\\develop\\m19\\storage\\bank.txt", std::ios::binary); // 

    char buffer[22]; //создали массив элементов типа char из 22 штук

   
    bank.read(buffer, sizeof(buffer)); // метод read, куда читать и сколько читать

    for (int i = 0; i < sizeof(buffer); i++)
      {
          std::cout << buffer[i];  // напечатали весь буфер
      }
      std::cout << "\n";
       for (int i = 0; i < 10; i++)
      {
          std::cout  << buffer[i]; // напечатали 10 элементов
      }

    bank.close(); // метод close не принимает аргументов, просто закрывает файл
}
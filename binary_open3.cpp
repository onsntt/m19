#include <iostream>
#include <fstream>
int main()
{

    std::ifstream bank; 

    bank.open("C:\\develop\\m19\\storage\\bankk.txt", std::ios::binary); 

    char buffer[20];

    bank.read(buffer, sizeof(buffer)); 

    buffer[19] = 0;

    std::cout << buffer << "\n";
    

    std::cout << bank.tellg() << "\n"; // печатаем текущую позицию считывающего курсора

    bank.seekg(10); // устанавливаем считывающий курсор  на 10 байт

    bank.read(buffer, sizeof(buffer));

    buffer[19] = 0;

    std::cout << buffer << "\n";
    bank.close(); // метод close не принимает аргументов, просто закрывает файл
}
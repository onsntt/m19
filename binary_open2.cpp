#include <iostream>
#include <fstream>
int main()
{

    std::ifstream bank; // переменная типа ifstream с именем bank

    bank.open("C:\\develop\\m19\\storage\\bank.txt", std::ios::binary); // используем метод open для открытия

    char buffer[22];

       bank.read(buffer, sizeof(buffer)); // метод read тут с двумя параметрами

    for (int i = 0; i < sizeof(buffer); i++)  //неоптимально, можно и без цикла
       std::cout << buffer[i];     
        
        std::cout << "\n";          

        //сделаем буфер побольше и запишем в последний элемент 0
    char buffer2[24];
    bank.read(buffer2, sizeof(buffer2)); // метод read тут с двумя параметрами
    buffer2[24] = 0;
    std::cout << buffer2;
    bank.close(); // метод close не принимает аргументов, просто закрывает файл
}
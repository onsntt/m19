#include <iostream>
#include <fstream>


int main() {

std::ifstream bank; // переменная типа ifstream с именем bank

bank.open("C:\\develop\\m19\\storage\\bank.txt"); // используем метод open для открытия

char buffer[22];

double money;
std::string currency;
bank >> money >> currency; //считали и положили в переменные money и currency значения из первой строки
std::cout << money << " " << currency << "\n";

bank >> money >> currency; // считали и положили в переменные money и currency значения из следующей строки
std::cout << money << " " << currency << "\n";

bank.close(); // метод close не принимает аргументов, просто закрывает файл
}
#include <iostream>
#include <fstream>
#include <vector>

int main() {

std::vector <double> purse;
std::ifstream bank;
bank.open("c:\\develop\\m19\\storage\\bankkk.txt");
double money;
double sum = 0;
while (!bank.eof())  // пока не конец файла - 
{
    bank >> money; // читаем значения в переменную
    purse.push_back(money); // и пуш_бэчим значение переменной в вектор
    std::cout << money << ", "; // можем даже напечатать то, что добавили
}

for (int i = 0; i < purse.size(); i++ )
{
    sum += purse[i];
}
std::cout << "Sum  = " << sum << "\n";

bank.close();

}
#include <iostream>
#include <fstream>

int main() {
    std::cout << "Here is the Daft Punk song named Around The World" << "\n" << "You may search some words in it"<< "\n" << "(if you realy want it)" << "\n" ; 
    std::ifstream veryUsefullSong;
    veryUsefullSong.open("t1.txt");
    std::cout << "Please, enter the word for searching: ";
    std::string wantedWord;
    std::cin >> wantedWord;
    std::string word;
    int matchFound = 0;
    while (!veryUsefullSong.eof())
    {
        veryUsefullSong >> word;
          if (wantedWord == word)
           {
             matchFound +=1;
           }
    }
    veryUsefullSong.close();
    
    std::cout << matchFound;
}
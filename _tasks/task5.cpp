#include <iostream>
#include <fstream>
#include <string>
//#include <cstring>
#include <cassert>
std::string re(int n)
{
    int num;
    std::string res = "";
    char symb = 0;

    while (n != 0)
     {
       num = n%10;
       n /= 10;
       symb = (char)(num+48);
       res = symb + res;
     }
     return res;
}

bool playMore (int z, int tz)
{
    if (z == 6)
    {
      std::cout << "Game Over. Team Znatoki win with the score " << z << " : " << tz << "\n";
      return 0;
    }
    else if (tz ==6)
    {
      std::cout << "Game Over. Team Telezriteli win with the score " << tz << " : " << z << "\n";
      return 0;
    }
    else 
    {
      if (tz > z)
        {
          std::cout << "Let's continue. Telezriteli is leading with the score " << tz << " : " << z << "\n";
          return 1;
        }
        else if (z>tz)
        {
          std::cout << "Let's continue. Znatoki is leading with the score " << z << " : " << tz << "\n";
          return 1;
        }
        else
        {
          std::cout << "Let's continue. The score is neutral - " << z << " : " << tz << "\n";
          return 1;
        }
    }
}
int main()
{
    bool baraban[13] = {true, true, true, true, true, true, true, true, true, true, true, true, true};
    int step = 0;
     int z=0;
     int tz = 0;
    int offset = 0;
    int activeQ;
    while (step < 14 )
    {
        std::cout << "Turn baraban - Enter offset: ";
        std::cin >> offset;
        offset = offset % 13;
        while (!baraban[offset])
        {
            offset++;
            if (offset == 13)
                offset = 0;
        }
        activeQ = offset + 1;
        step += 1;
        std::cout << "Sector: " << activeQ << "\n";
        baraban[offset] = false;

        std::ifstream buffer;
        std::string str = "";
       
        std::string ext = ".txt";
        std::string qFileName = "www/q";
        std::string aFileName = "www/a";
        qFileName = qFileName + re(activeQ) + ext;
       
       // std::cout << qFileName << "\n";
        
        buffer.open(qFileName);
        assert(buffer.is_open());
        while (!buffer.eof())
        {
            std::getline(buffer, str);
            std::cout << str << "\n";
        }
        str = "";
        buffer.close();
        std::cout << "Enter your answer: \n";
        std::string answer;
        std::cin >> answer;
       // std::getline(std::cin, answer);
        aFileName = aFileName + re(activeQ) + ext;
        buffer.open(aFileName);
        assert(buffer.is_open());

        while (!buffer.eof())
        {
            std::getline(buffer, str);
            
        }
        buffer.close();
        if (str == answer)
          {
            z++;
            std::cout << "\n Right answer! \n";

          }
          else
          {
            tz++;
            std::cout << "\n Wrong answer! \n ";
          }
       if (!playMore(z,tz)) return 0;



    }
    

    

}
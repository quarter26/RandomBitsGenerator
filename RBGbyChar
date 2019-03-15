/* 
(Pseudo)random bits generator by random char
Author: An Da
This program outputs file as (pseudo)random chars.
*/
#include <iostream>
#include <fstream>
#include <ctime>

using std::cout;
using std::endl;
using std::ofstream;

const int SIZE_CHAR = 125000;

int main()
{
    ofstream randomBits;
    randomBits.open("bits");
    srand((unsigned)time(NULL));
    for (int i = 0; i < SIZE_CHAR; i++)
    {
        int x = rand() % 255 + 1;
        randomBits << char(x);
    }
    randomBits.close();
    return 0;
}

// W VSC w tasks.json nalezy ustawic args w nastepujacy sposob:
/* 
"args": [
            "-fdiagnostics-color=always",
            "-g",
            "${fileDirname}/*.cpp",
            "-o",
            "${fileDirname}\\${fileBasenameNoExtension}.exe"
        ],
*/
// istotny jest trzeci argument.

#include <iostream>
using namespace std;

#include "nagl.h"
int ile_pigmejow = 9;
int main()
{
    cout << "Poczatek programu\n";
    funkcja_francuska();
    funkcja_niemiecka();
    cout << "Koniec programu\n";
}
//*************************************************************
void funkcja_etiopska()
{
    cout << "Jestem w Addis Abebie! (Afryka) ---------\n";
    cout << "Na swiecie mam przyjaciolL " << ile_pigmejow << " Pigmejow, oraz "
            << ile_europejczykow << " Europejczykow\n";
}
//*************************************************************
void funkcja_kenijska()
{
    cout << "Jestem w Nairobi! (Afryka) -----------\n";
    cout << "Na swiecie mam przyjaciol: " << ile_pigmejow << " Pigmejow, oraz "
            << ile_europejczykow << " Europejczykow\n";
}
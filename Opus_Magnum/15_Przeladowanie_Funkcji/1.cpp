#include <iostream>
using namespace std;

void wypisz(int liczba);
void wypisz(char znak1, double x, const char *tekst);
void wypisz(int liczba, char znak);
void wypisz(char znak, int liczba);
//************************************************************
int main()
{
    wypisz(12345);
    wypisz(8, 'X');
    wypisz('D', 89.5, " stopni Celsjusza ");
    wypisz('M', 22);
}
//************************************************************
void wypisz(int liczba)
{
    cout << "Liczba typu int: " << liczba << endl;
}
//************************************************************
void wypisz(char znak1, double x, const char *tekst)
{
    cout << "Blok " << znak1 << ": " << x << tekst << endl;
}
//************************************************************
void wypisz(int liczba, char znak)
{
    cout << znak << ") " << liczba << endl;
}
//************************************************************
void wypisz(char znak, int liczba)
{
    cout << liczba << " razy wystapil stan " << znak << endl;
}
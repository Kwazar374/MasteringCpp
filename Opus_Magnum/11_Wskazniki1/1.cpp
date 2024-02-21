#include <iostream>
using namespace std;
//*******************************************************
int main()
{
    int zmienna = 8, drugi = 4;
    int *wskaznik;
    wskaznik = &zmienna;
    cout << "zmienna = " << zmienna
        << "\n a odczytana przez wskaznik = " << *wskaznik << endl;

    zmienna = 10;
    cout << "zmienna = " << zmienna
        << "\n a odczytana przez wskaznik = " << *wskaznik << endl;

    *wskaznik = 200;
    cout << "zmienna = " << zmienna
        << "\n a odczytana przez wskaznik = " << *wskaznik << endl;

    wskaznik = &drugi;
    cout << "zmienna = " << zmienna
        << "\n a odczytana przez wskaznik = " << *wskaznik << endl;
}
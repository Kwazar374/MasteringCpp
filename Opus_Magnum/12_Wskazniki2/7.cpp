#include <iostream>
using namespace std;
//********************************************
void pokazywacz(const int *wsk, int ile);
void zmieniacz(int *wsk, int ile);

//********************************************
int main()
{
    int tablica[4] = {110, 120, 130, 140};

    pokazywacz(tablica, 4);
    zmieniacz(tablica, 4);
    pokazywacz(tablica, 4);
    cout << "Dla potwierdzenia tablica[3] = " << tablica[3];
}

//********************************************
void pokazywacz(const int *wsk, int ile)
{
    cout << "Dziala pokazywacz " << endl;
    for (int i = 0; i < ile; ++i, ++wsk)
    {
        cout << "element nr " << i << " ma wartosc " << *wsk << endl;
    }
}

//********************************************
void zmieniacz(int *wsk, int ile)
{
    cout << "Dziala zmieniacz " << endl;
    for (int i = 0; i < ile; ++i, ++wsk)
    {
        *wsk += 500;
        cout << "element nr " << i << " ma wartosc " << *wsk << endl;
    }
}
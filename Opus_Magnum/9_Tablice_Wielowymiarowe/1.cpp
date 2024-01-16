#include <iostream>
using namespace std;
void wczytaj_dane();

int main()
{
    constexpr int ile_pomiarow = 4;
    long        widmo[ile_pomiarow][2048] {};

    wczytaj_dane();
    
    cout << "Jaki przedzial widm ma byc sumowany?\nPodaj dwie liczby (oddzielone spacja): ";
    int pocz;
    int koniec;
    cin >> pocz >> koniec;

    for (int nr_widma = 0; nr_widma < ile_pomiarow; ++nr_widma)
    {
        long suma = 0;
        for (int i = pocz; i <= koniec; ++i)
        {
            suma += widmo[nr_widma][i];
        }
        cout << "\nW widmie " << nr_widma << " miedzy kanalami " << pocz
            << " a " << koniec << " jest " << suma << " zliczen";
    }
}

void wczytaj_dane()
{
    ;
}
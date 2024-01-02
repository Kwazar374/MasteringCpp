#include <iostream>
#include <typeinfo>
using namespace std;
long long potega(int stopien, long liczba);
//******************************************************************
int main()
{
    cout << "Program na obliczanie poteg liczb calkowitych z zadanego przedzialu\n"
            "Podaj poczatek przedzialu: ";

    int pocz;
    cin >> pocz;
    cout << "Podaj koniec przedzialu: ";
    int koniec;
    cin >> koniec;

    for(int i = pocz; i <= koniec; ++i)
    {
        cout << i
                << " do kwadratu = "
                << potega(2, i)
                << ", a do szescianu = "
                << potega(3, i)
                << endl;
    }
    auto tesa = potega(35, 3);
    cout << "W obiekcie tesa jest wartosc: " << tesa << endl;
    cout << "sizeof(tesa) = " << sizeof(tesa)
            << ", a sizeof(long) = " << sizeof(long) << endl;
    cout << "typ zmiennej tesa = " << typeid(tesa).name();
}

//********************************************************************

long long potega(int stopien, long liczba)
{
    long long wynik = liczba;
    for(int s = 1; s < stopien; ++s) {
        wynik = wynik * liczba;
    }
    return wynik;
}
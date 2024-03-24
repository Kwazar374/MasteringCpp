#include <iostream>
#include <string>
#include <vector>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////
class Tklasa {
    public:
        string          imie {"nieznane imie"};
        double          *wskaznik {nullptr};
        int             tablicaA[5] {100, 200, 300};
        vector<char>    symbole {'a', 'b', 'c'};

        enum stan {pauza = 40, stop = 55, play = 66, przewijanie = 77};
        stan            odtwarzacz {stop};
};
//////////////////////////////////////////////////////////////////////////////////
int main()
{
    Tklasa ob;

    cout    << "Wstepna zawartosc kazdego nowego obiektu klasy Tklasa to:\n"
            << "ob.imie = " << ob.imie
            << ", ob.wskaznik = " << ob.wskaznik
            << ", odtwarzacz jest w stanie = " << ob.odtwarzacz
            << endl;

    cout    << "Tresc tablicyA: ";
    for (int k : ob.tablicaA) cout << k << ", ";

    cout    << "Tresc wektora symbole: ";
    for (auto s : ob.symbole) cout << s << ", ";
}
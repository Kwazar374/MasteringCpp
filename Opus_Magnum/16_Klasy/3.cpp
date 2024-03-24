#include <string>
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////
class Tnumer
{
    int liczba;
    string nazwa;
public:
    Tnumer(int k, string opis);
    void schowaj(int m)
    {
        liczba = m;
        melduj();
    }
    int pokaz() {return liczba;}
    void melduj()
    {
        cout << nazwa << liczba << endl;
    }
};
//////////////////////////////////////////////////////////////////////////////////
Tnumer::Tnumer(int k, string opis)
{
    liczba = k;
    nazwa = opis;
}
//////////////////////////////////////////////////////////////////////////////////
int main()
{
    Tnumer      samolot {1200, "Biezaca wysokosc "};
    Tnumer      atmosfera = Tnumer {920, "Cisnienie atmosferyczne "};
    Tnumer      kurs(63, "Kierunek lotu ");

    samolot.melduj();
    kurs.melduj();
    atmosfera.melduj();

    cout << "\nKorekta lotu ------------------\n";
    samolot.schowaj(1201);
    kurs.schowaj(kurs.pokaz() + 3);
    atmosfera.schowaj(919);
}
#include <iostream>
#include <string>
using namespace std;
////////////////////////////////////////////////////////////////////////////////
class Tgadula
{
    int licz;
    string tekst;
public:
    Tgadula(int k, string opis);
    ~Tgadula();

    int pokaz() {return licz;}
    void schowaj(int x) {licz = x;}
    void coto()
    {cout << tekst << " ma wartosc " << licz << endl;}
};
////////////////////////////////////////////////////////////////////////////////
Tgadula::Tgadula(int k, string opis)
{
    tekst = opis;
    licz = k;
    cout << "Konstruuje obiekt " << tekst << endl;
}
////////////////////////////////////////////////////////////////////////////////
Tgadula::~Tgadula()
{
    cout << "Pracuje destruktor (sprzata) " << tekst << endl;
}
////////////////////////////////////////////////////////////////////////////////
Tgadula a(1, "obiekt globalny a (GLOBALNY)");
Tgadula b(2, "obiekt globalny b (GLOBALNY)");
////////////////////////////////////////////////////////////////////////////////
int main()
{
    a.coto();
    b.coto();
    {
        cout << "Poczatek lokalnego zakresu ---------------\n";
        Tgadula c(30, "obiekt c (lokalny)");
        Tgadula a(40, "obiekt a (lokalny)");
        cout << "\nCo teraz mamy :\n";
        a.coto();
        b.coto();
        c.coto();
        cout << "Do zaslonietego obiektu globalnego mozna sie jednak dostac\n";
        ::a.coto();
        cout << "Konczy sie lokalny zakres -----------------\n";
    }
    cout << "Juz jestem poza blokiem \n";
    a.coto();
    b.coto();
    cout << "Sam uruchamiam destruktor obiektu a\n";
    //a.~Tgadula(); // UB
    cout << "Koniec programu!!!!!!!!!\n";
}
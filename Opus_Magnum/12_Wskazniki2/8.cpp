#include <iostream>
using namespace std;

char *producent(void);
char *w2;
//********************************************
int main()
{
    char *w1 = new char;
    w2 = new char;

    char *w3 = nullptr;
    w3 = producent();
    char *w4 = producent();

    *w1 = 'H';
    *w2 = 'M';
    *w3 = 'I';
    cout    << "oto 3 znaki: " << *w1 << *w2 << *w3
            << "\noraz smiec w czwartym: " << *w4 << endl; // u mnie jest po prostu brak znaku
    
    delete w1;
    delete w2;
    delete w3;
    delete w4;
}
//********************************************
char *producent(void)
{
    char lokalny = 'M';

    char *wskaznik;
    cout << "Wlasnie produkuje obiekt\n";
    wskaznik = new char;

    return wskaznik;
}
#include <iostream>
#include "Tbilet.h"
using namespace std;
//////////////////////////////////////////////////////////////////////////////////
void  funkcja_w_innym_pliku()
{
    cout << "\nJestesmy w innym pliku programu, \ntu tez uzywamy biletow\n";
    Tbilet bialy;
    bialy.zapamietaj("Krakow", "Tarnow", Tbilet::osobowy);
    bialy.wypisz();

    cout << "Spieszy sie nam, zmieniamy bilet na taki:" << endl;
    bialy.zmien_rodzaj_pociagu(Tbilet::pospieszny);
    bialy.wypisz();
}
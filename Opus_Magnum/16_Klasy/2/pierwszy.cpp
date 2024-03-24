#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////
#include "Tosoba.h"
#include "Tbilet.h"
//////////////////////////////////////////////////////////////////////////////////
void prezentacja(Tosoba);
void funkcja_w_innym_pliku();
//////////////////////////////////////////////////////////////////////////////////
int main()
{
    Tosoba kompozytor;
    Tosoba autor;
    kompozytor.zapamietaj("Fryderyk Chopin", 36);
    autor.zapamietaj("Marcel Proust", 34);

    prezentacja(kompozytor);
    prezentacja(autor);

    cout << "\nUzywamy w tym pliku tez klasy 'Tbilet'\n";

    Tbilet zolty, niebieski;
    zolty.zapamietaj("Frankfurt", "Paris", Tbilet::ekspres, 1);
    zolty.wypisz();

    niebieski.zapamietaj("Zurich", "Genewa", Tbilet::przyspieszony);
    niebieski.wypisz();

    niebieski.zmien_rodzaj_pociagu(Tbilet::pospieszny);
    cout << "\nPo zmianie tego biletu...\n";
    niebieski.wypisz();
    funkcja_w_innym_pliku();
}
//////////////////////////////////////////////////////////////////////////////////
void prezentacja(Tosoba ktos)
{
    cout << "Mam zaszczyt przedstawic panstwu, \nOto we wlasnej osobie: ";
    ktos.wypisz();
}
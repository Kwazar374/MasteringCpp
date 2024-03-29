#include "Tbilet.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////
int Tbilet::wydrukowano_biletow = 0;
//////////////////////////////////////////////////////////////////////////////////
void Tbilet::zapamietaj(string sk, string dok, Trodzaj_pociagu poc, int kl)
{
    skad = sk;
    dokad = dok;
    jaki_pociag = poc;
    klasa_kolejowa = kl;
}
//////////////////////////////////////////////////////////////////////////////////
void Tbilet::wypisz()
{
    ++wydrukowano_biletow;
    int szerokosc_biletu = 55;
    string kreska = "*" + string(szerokosc_biletu, '-') + "\n";
    string linijka1 = "| Bilet (nr: " + to_string(wydrukowano_biletow) +
                        ") na pociag " + opis_rodzaju();
    
    string linijka2 = "| " + skad + " ---> " + dokad + ", klasa " + to_string(klasa_kolejowa);

    cout << kreska << linijka1 << endl << linijka2 << endl << kreska;
}
//////////////////////////////////////////////////////////////////////////////////
string Tbilet::opis_rodzaju()
{
    vector<string> opisy = {"osobowy (lub regionalny)", "przyspieszony (lekko)",
                            "pospieszny", "InterCity ekspres"};
    return opisy[jaki_pociag];
}
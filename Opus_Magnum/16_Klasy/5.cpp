#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////
class Tsilnik {
private:
    string nazwa;
    int biezaca_moc;
    int moc_dopuszczalna;
public:
    static int licznik_silnikow;
    static int sumaryczna_moc;
private:
    static int niezawodnosc;

public:
    Tsilnik(string naz, int moc)
    {
        ++licznik_silnikow;
        nazwa = naz;
        moc_dopuszczalna = moc;
        biezaca_moc = 0;
    }
    ~Tsilnik()
    {
        stop();
        --licznik_silnikow;
    }

    void cala_naprzod()
    {
        biezaca_moc = moc_dopuszczalna;
        sumaryczna_moc += biezaca_moc;
        cout << "Silnik " << nazwa << ": cala naprzod " << endl;
    }
    void stop()
    {
        sumaryczna_moc -= biezaca_moc;
        biezaca_moc = 0;
        cout << "Silnik " << nazwa << ": stop" << endl;
    }
    int ile_godz_wytrzyma()
    {
        return niezawodnosc + 5033;
    }
};
////////////////////////////////////////////////////////////////////////////////////////
int Tsilnik::licznik_silnikow = 0;
int Tsilnik::sumaryczna_moc;
int Tsilnik::niezawodnosc = 1300000;
////////////////////////////////////////////////////////////////////////////////////////
void trudne_manewry();
////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    cout << "Stocznia, silnikow jest teraz = " << Tsilnik::licznik_silnikow << endl;

    cout << "Zamierzamy kupic te silniki. Ile godzin wytrzymuja? " << endl;

    Tsilnik lewy("Lewy", 1200);
    Tsilnik prawy("Prawy", 1400);

    cout << "Po definicji kilku silnikow (i zwodowaniu statku)\n";

    cout << "Dwa sposoby uzyskania informacji ze skl. statycznego\n"
        << " 1) Klasa Tsilnik::licznik_silnikow = " << Tsilnik::licznik_silnikow
        << ",\n 2a) lewy.licznik_silnikow = " << lewy.licznik_silnikow
        << ",\n 2b) prawy.licznik_silnikow = " << prawy.licznik_silnikow << endl;

    cout << "Na razie pracuja z moca sumaryczna = "
        << Tsilnik::sumaryczna_moc
        << ", inaczej: " << lewy.sumaryczna_moc
        << endl;

    lewy.cala_naprzod();
    prawy.cala_naprzod();
    cout << "Po opuszczeniu portu moc = " << prawy.sumaryczna_moc << endl;

    cout << "Ile wytrzymuja silniki tej firmy? ";
    cout << lewy.ile_godz_wytrzyma() << "h" << endl;

    trudne_manewry();

    cout << "Na otwartym morzu. Silnikow: " << Tsilnik::licznik_silnikow
        << ", obecnie sum. moc: " << Tsilnik::sumaryczna_moc
        << endl;

    cout << "Gdy rejs sie skonczyl" << endl;
}
////////////////////////////////////////////////////////////////////////////////////////
void trudne_manewry()
{
    cout << "---Rafa koralowa. Tu musimy doinstalowac maly silnik" << endl;
    Tsilnik man("manewrowy", 400);

    man.cala_naprzod();
    cout << "---Teraz lacznie silnikow =  " << Tsilnik::licznik_silnikow
        << " z sum. moc = " << man.sumaryczna_moc << endl;
}
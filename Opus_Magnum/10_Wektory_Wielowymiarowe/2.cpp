#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
string tekst_nikt("Bilet niespzedany");
//*************************************************************************
void grafik_zajetosci_miejsc(vector<vector<vector<string>>> widownia)
{
    for (int nr_pietra = 0; nr_pietra < widownia.size(); ++nr_pietra) {
        cout << "Pietro nr " << nr_pietra << endl;
        for (auto rzad : widownia[nr_pietra]) {
            for (auto fotel : rzad)
            {
                if (fotel == tekst_nikt) cout << "|.";
                else cout << "|X";
            }
            cout << "|" << endl;
        }
    }
}
//*************************************************************************
void wyswietlanie_rezerwacji_miejsc(vector<vector<vector<string>>> widownia)
{
    int ile_widzow = 0;
    cout << "Na dzisiejszym wieczornym przedstawieniu zasiada" << endl;
    for (int nr_pietra = 0; nr_pietra < widownia.size(); ++nr_pietra)
        for (int nr_rzedu = 0; nr_rzedu < widownia[nr_pietra].size(); ++nr_rzedu)
            for (int nr_fotela = 0; nr_fotela < widownia[nr_pietra][nr_rzedu].size(); ++nr_fotela)
            {
                if (widownia[nr_pietra][nr_rzedu][nr_fotela] != tekst_nikt)
                {
                    cout << " Pan(i) " << setw(30)
                        << widownia[nr_pietra][nr_rzedu][nr_fotela]
                        << " - pietro " << nr_pietra << ", rzad: " << nr_rzedu
                        << ", fotel: " << nr_fotela << endl;
                        ++ile_widzow;
                }
            }
    cout << "Czyli lacznie " << ile_widzow << " widzow" << endl;
}
//*************************************************************************
int main()
{
    int liczba_pieter = 2;
    int liczba_rzedow = 15;
    int liczba_foteli_w_rzedzie = 25;

    using Trzad = vector<string>;
    using Tpietro = vector<Trzad>;
    using Twidownia = vector<Tpietro>;

    Twidownia teatr_wielki  (liczba_pieter,
                            Tpietro (liczba_rzedow,
                                    Trzad   (liczba_foteli_w_rzedzie,
                                            tekst_nikt
                                            )
                                    )
                            );
    
    // Robimy rezerwacje
    teatr_wielki[1][0][12] = "Jozef Pilsudski";
    teatr_wielki[0][8][4] = "Wincenty Witos";
    teatr_wielki[0][2][16] = "Boleslaw Wieniawa-Dlugoszewski";
    teatr_wielki[0][2][17] = "Hanka Ordonowa";

    cout << "Grafik zajetosci miejsc w Teatrze Wielkim " << endl;
    grafik_zajetosci_miejsc(teatr_wielki);
    cout << "\nRezulataty rezerwacji w Teatrze Wielkim" << endl;
    wyswietlanie_rezerwacji_miejsc(teatr_wielki);

    vector<vector<vector<string>>> teatr_slowackiego
            (liczba_pieter,
            vector<vector<string>>  (
                                    liczba_rzedow,
                                    vector<string>  (
                                                    liczba_foteli_w_rzedzie,
                                                    tekst_nikt
                                                    )
                                    )
            );
    
    // Dokonywanie rezerwacji
    teatr_slowackiego[0][2][5] = "Stanislaw Wyspianski";
    teatr_slowackiego[0][2][16] = "Teofila Wyspianska";
    teatr_slowackiego[1][1][8] = "Lucjan Rydel";

    cout << "\n" << "Rezultaty rezerwacji w Teatrze Slowackiego " << endl;
    wyswietlanie_rezerwacji_miejsc(teatr_slowackiego);
    cout << "Na miejscu pietro 0, rzad 3, fotel 8 siedzi: "
            << teatr_slowackiego[0][3][8] << endl;

}
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


    
    vector<vector<vector<string>>> teatr_groteska;

    teatr_groteska.resize(liczba_pieter);
    for (int nr_pietra = 0; nr_pietra < liczba_pieter; ++nr_pietra)
    {
        teatr_groteska[nr_pietra].resize(liczba_rzedow);
        for (int nr_rzedu = 0; nr_rzedu < liczba_rzedow; ++nr_rzedu)
        {
            teatr_groteska[nr_pietra][nr_rzedu].resize(liczba_foteli_w_rzedzie);
            for (int nr_fotela = 0; nr_fotela < liczba_foteli_w_rzedzie; ++nr_fotela)
            {
                teatr_groteska[nr_pietra][nr_rzedu][nr_fotela] = tekst_nikt;
            }
        }
    }

    teatr_groteska[1][2][15] = "Marysia Kmiecik";
    teatr_groteska[0][8][4] = "Wojtus Krolas";
    cout << "Rezultaty rezerwacji w Teatrze Groteska" << endl;
    wyswietlanie_rezerwacji_miejsc(teatr_groteska);



    vector<vector<vector<string>>> teatr_stu;

    for (int nr_pietra = 0; teatr_stu.size() < liczba_pieter; ++nr_pietra)
    {
        Tpietro robocze_pietro;

        for (int nr_rzedu = 0; nr_rzedu < liczba_rzedow; ++nr_rzedu)
        {
            Trzad rzad_roboczy;
            for (int nr_fotela = 0; nr_fotela < liczba_foteli_w_rzedzie; ++nr_fotela)
            {
                rzad_roboczy.push_back(tekst_nikt);
            }
            robocze_pietro.push_back(rzad_roboczy);
        }
        teatr_stu.push_back(robocze_pietro);
    }

    teatr_stu[1][2][15] = "Krzysztof Jasinski";
    teatr_stu[0][8][4] = "Maryla Rodowicz";
    teatr_stu[1][3][20] = "Marek Grechuta";

    cout << "Rezultaty rezerwacji w Teatrze Stu" << endl;
    wyswietlanie_rezerwacji_miejsc(teatr_stu);



    vector<vector<int>> opis_widowni
    {
        {26, 26, 30, 30, 28},
        {26, 24, 24, 20},
        {30, 30, 28},
        {28, 14}
    };

    vector<vector<vector<string>>> sydney_opera;

    sydney_opera.resize(opis_widowni.size());

    for (int nr_pietra = 0; nr_pietra < sydney_opera.size(); ++nr_pietra)
    {
        int ile_rzedow_na_tym_pietrze = opis_widowni[nr_pietra].size();
        sydney_opera[nr_pietra].resize(ile_rzedow_na_tym_pietrze);

        for (int nr_rzedu = 0; nr_rzedu < ile_rzedow_na_tym_pietrze; ++nr_rzedu)
        {
            int ile_foteli_w_tym_rzedzie = opis_widowni[nr_pietra][nr_rzedu];
            sydney_opera[nr_pietra][nr_rzedu].resize(ile_foteli_w_tym_rzedzie);

            for (int nr_fotela = 0; nr_fotela < ile_foteli_w_tym_rzedzie; ++nr_fotela)
            {
                sydney_opera[nr_pietra][nr_rzedu][nr_fotela] = tekst_nikt;
            }
        }
    }

    sydney_opera[1][3][4] = "Tadeusz Boy-Zelenski";
    sydney_opera[0][3][9] = "Bronislaw Malinowski";
    sydney_opera[3][1][12] = "Piotr Skrzynecki";
    sydney_opera[2][1][5] = "S. I. Witkiewicz(Witkacy)";

    cout << "Grafik zajetosci widowni Sydney Opera House" << endl;
    grafik_zajetosci_miejsc(sydney_opera);
    cout << "Rezultaty rezerwacji w Sydney Opera House" << endl;
    wyswietlanie_rezerwacji_miejsc(sydney_opera);

}
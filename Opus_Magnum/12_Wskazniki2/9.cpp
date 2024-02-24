#include <iostream>
using namespace std;
//********************************************
int main()
{
    int ile;
    cout << "Podaj rozmiar?: ";
    cin >> ile;

    int (*tablica)[7][4] = new int[ile][7][4];
    tablica[2][4][3] = 1000;
    cout << tablica[2][4][3] << endl;
    delete [] tablica;

    // rezerwacje identycznej tablicy mozemy zapisac latwiej:
    auto *tab = new int[ile][7][4];
    tab[2][3][4] = 1000;
    delete [] tab;
}
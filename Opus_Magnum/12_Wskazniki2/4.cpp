#include <iostream>
using namespace std;
//*****************************************
int main()
{
    int tablica[5];
    int *wsk_czer, *wsk_ziel;
    int i;

    wsk_czer = &tablica[3];
    cout << "Mamy piecolementowa tablice\n"
            "Wskaznik czerwony pokazuje na element o indeksie 3\n"
            "Na ktory element ma pokazywac wskaznik zielony?(0-4): ";

    cin >> i;
    if(i < 0 || i > 4)
        cout << "\nNie ma takiego elementu tej tablicy!";
    else {
        wsk_ziel = &tablica[i];
        cout << "\nZ przeprowadzonego porownania wskaznikow\n"
                "czerwonego z zielonym wynika, ze\n";
        
        if(wsk_czer > wsk_ziel) {
            cout << "zielony pokazuje na element blizej poczatku tablicy";
        }
        else if(wsk_czer < wsk_ziel) {
            cout << "zielony pokazuje na element o wyzszym indeksie";
        }
        else {
            cout << "zielony i czerwony pokazuja na to samo\n";
        }
    }
}
#include <iostream>
using namespace std;
#include <cstdlib>
#include <cmath>
void kurs();
void wiatraczek();
void wahadlo();
//***************************************************
void zwloka_czasowa(int ile)
{
    for (int i = 0; i < ile * 1000; ++i);
}
//***************************************************
int main()
{
    void (*twf[3])() = { &wahadlo, &wiatraczek, &kurs};
    int co;
    while(1) {
        cout    << "-------------------Menu---------------------\n"
                << "\t0 - wahadlo\n\t1 - wiatraczek \n\t2 - kurs\n\t9 - koniec programu\n\n"
                << "Podaj numer zadanej akcji: ";
        cin >> co;
        switch(co) {
            case 0:
            case 1:
            case 2:
                (*twf[co])();
                break;
            case 9:
                exit(1);
            default:
                break;
        }
    }
}
//***************************************************
void kurs()
{
    for (int i = 0; i < 100; ++i) {
        cout << "kurs " << (232 + (i % 4)) << "...\r" << flush;
        zwloka_czasowa(300000);
    }
    cout << "\nPokazywalem kurs...\n";
}
//***************************************************
void wiatraczek()
{
    char symbol[] = {'|', '/', '-', '\\'};
    for (int i = 0; i < 100; ++i) {
        cout << "   " << symbol[i % 4] << "\r" << flush;
        zwloka_czasowa(200000);
    }
    cout << "\nWiatraczek sie pokrecil...\n";
}
//***************************************************
void wahadlo()
{
    cout << '\n';
    for (int i = 0; i < 500; ++i) {
        string wzorek(25, ' ');

        int pozycja = 12 * sin(i/20.0) + 12;
        wzorek[pozycja] = '*';
        cout << wzorek << '\r' << flush;
        zwloka_czasowa(50000);
    }
    cout << "\n";
}
#include <iostream>
using namespace std;

int sumator(int jeszcze_krokow, int suma_dotychczas);
void dwojkowo(int liczba);
void schodki(int ile, char znak);
//********************************************************************
int main()
{
    cout << "Sumowanie liczb naturalnych od 0 do n. Podaj wartosc n: ";
    int n = 0;
    cin >> n;
    int wynik = sumator(n, 0);
    cout << "\nSuma liczb naturalnych od 0 do " << n << " to = "
            << wynik
            << endl;
    
    // inny przyklad funkcji rekurencyjnej:
    int liczba = 241;

    cout << endl;
    liczba = 30942;
    cout << "\n" << liczba << " to dwojkowo ";
    dwojkowo(liczba);
    cout << endl;
    return 0;
}
//********************************************************************
int sumator(int jeszcze_krokow, int suma_dotychczas)
{
    int rezultat = 0;
    static int krok_rekurencji;

    int to_pietro_nr = krok_rekurencji;
    krok_rekurencji++;
    schodki(to_pietro_nr, '>');
    cout << suma_dotychczas << " + " << to_pietro_nr << " = "
            << (suma_dotychczas + to_pietro_nr) << endl;

    // wlasciwa operacja sumowania
    suma_dotychczas += to_pietro_nr;

    // warunek zatrzymujacy rekurencje +++++++++++++
    if(jeszcze_krokow > 0)
    {
        rezultat = sumator(jeszcze_krokow -1, suma_dotychczas);
    } else {
        cout << "..........to ostatni krok, wracamy.........." << endl;
        rezultat = suma_dotychczas;
    }
    schodki(to_pietro_nr, '<');
    cout << endl;
    krok_rekurencji--;
    return rezultat;
}
//********************************************************************
void dwojkowo(int liczba)
{
    int reszta = liczba % 2;
    if(liczba > 1)
    {
        dwojkowo(liczba / 2);
    }
    cout << reszta;
    return;
}
//********************************************************************
void schodki(int ile, char znak)
{
    cout << ile << " pietro: ";
    for(int m = 0; m < ile; m++)
    {
        cout << znak << " ";
    }
    cout << " ";
}
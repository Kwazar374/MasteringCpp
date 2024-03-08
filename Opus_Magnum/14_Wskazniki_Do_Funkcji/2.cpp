#include <iostream>
#include <vector>
using namespace std;
//***************************************************
// Dwie przykladowe funkcje orzekajace
//***************************************************
bool czy_nieparzyste_Fcja(int liczba)
{
    return (liczba % 2);
}
//***************************************************
bool czy_wieksze_niz_9_Fcja(int liczba)
{
    return (liczba > 9);
}
//***************************************************
using Typwskf = decltype(&czy_nieparzyste_Fcja);
//***************************************************
// Algorytm zliczajacy

// int przelicz_elementy(vector<int> pojemnik, Typwskf orzecznik)
int przelicz_elementy(vector<int> pojemnik, bool (*orzecznik)(int i) )
{
    int licznik_spelniajacych = 0;
    for (int element : pojemnik)
    {
        if (orzecznik(element)) {
            licznik_spelniajacych++;
        }
    }
    return licznik_spelniajacych;
}
//***************************************************
int main()
{
    vector<int> v {4, 2, 13, 11, 5, 24, 7};
    cout << "Korzystajac z funkcji (orzekajacych) sprawdzamy, ze\n";
    int ile = przelicz_elementy(v, &czy_nieparzyste_Fcja);
    cout << "a) Nieparzystych liczb jest " << ile << endl;

    ile = przelicz_elementy(v, czy_wieksze_niz_9_Fcja);
    cout << "b) Wartosci > 9 jest " << ile << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int ile;
    cout << "ile gwiazdek ma miec kapitan?: ";
    cin >> ile;
    cout << "\n No to narysujemy wszystkie " << ile << ": ";
    while(ile)
    {
        cout << "*";
        ile = ile - 1;
    }
    cout << "\n Teraz zmienna ile ma wartosc " << ile;
}
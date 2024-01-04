#include <iostream>
using namespace std;

int liczba;
void fff(void);
//*****************************************
int main()
{
    int n;
    liczba = 10;
    n = 4;
    cout << "Wartosci: liczba = " << liczba << " n = " << n;
    fff();
}
//*****************************************
void fff(void)
{
    int x;
    x = 5;
    liczba--;

    cout << " sumka = " << (x + liczba);
}
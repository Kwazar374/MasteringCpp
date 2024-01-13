#include <iostream>
using namespace std;

void potrojenie(int ile, long t[]);

int main()
{
    constexpr int rozmiar = 8192;
    long widmo[rozmiar];

    for (int i = 0; i < rozmiar; i++)
    {
        widmo[i] = i;
        if (i < 6)
            cout << "widmo[" << i << "] = " << widmo[i] << endl;
    }

    potrojenie(rozmiar, widmo);
    cout << "Po wywolaniu funkcji\n";
    for(int i = 0; i < 4; ++i)
    {
        cout << "widmo[" << i << "] = " << widmo[i] << endl;
    }
}

void potrojenie(int ile, long t[])
{
    for (int i = 0; i < ile; i++)
    {
        t[i] *= 3;
    }
}
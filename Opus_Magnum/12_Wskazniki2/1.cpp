#include <iostream>
using namespace std;
//***************************************************
int main()
{
    int     tabi[6];
    double  tabd[6];

    int *wi;
    double *wd;

    wi = &tabi[0];      // to samo co wi = tabi
    wd = &tabd[0];

    cout << "Oto jak przy inkrementacji wskaznikow zmieniaja sie ukryte w nich adresy:\n";
    for (int i = 0; i < 6; i++, wi++, wd++)
    {
        cout << "i = " << i
            << ") wi = "
            << reinterpret_cast<unsigned long long>(wi)
            << ", wd = "
            << reinterpret_cast<unsigned long long>(wd) << endl;
    }
}
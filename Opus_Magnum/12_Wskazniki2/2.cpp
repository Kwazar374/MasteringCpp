#include <iostream>
#include <iomanip>
using namespace std;
//***************************************************
int main()
{
    int *wi;
    double *wd;
    int tabint[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    double tabdbl[10];

    wd = &tabdbl[0];
    for (int i = 0; i < 10; ++i)
    {
        *(wd++) = i / 10.0;
    }
    cout << "Tresc tablic na poczatku\n";
    wi = tabint;
    wd = tabdbl;
    for (int k = 0; k < 10; k++)
    {
        cout << k << ") \t" << *wi << "\t\t\t\t" << *wd << endl;
        wi++;
        wd++;
    }

    wi = &tabint[5];
    wd = tabdbl + 2;

    for (int m = 0; m < 4; m++)
    {
        *(wi++) = -222;
        *(wd++) = -777.5;
    }
    cout << "Tresc tablic po wstawieniu nowych wartosci\n";
    wi = tabint;
    wd = tabdbl;
    for (int p = 0; p < 10; p++)
    {
        cout    << "tabint["        << p << "] = "  << setw(5) << *(wi++)
                << " \t\ttabdbl["   << p << "] = "  << setw(6) << *(wd++)
                << endl;
    }
}
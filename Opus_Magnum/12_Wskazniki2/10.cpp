#include <iostream>
using namespace std;
#include <new>
//********************************************
int main()
{
    int *osiedle = new int[5000];

    for (int i = 0; i < 5000; ++i) osiedle[i] = 1;

    void *gdzie = &osiedle[100];
    int *wskint = new (gdzie) int;

    *wskint = 222;
    cout << "*wskint = " << (*wskint) << endl << endl;

    gdzie = &osiedle[102];
    int *wTabi = new (gdzie) int[3];

    for (int m = 0; m < 3; m++) {
        wTabi[m] = 1000 + m;
        cout << "w Tabi[" << m << "] = " << wTabi[m] << "\n";
    }
    cout << endl << endl;

    gdzie = &osiedle[106];
    double * wTabd = new (gdzie) double[3];

    for (int n = 0; n < 3; n++) {
        wTabd[n] = 1 + (0.1 * n);
        cout << "wTabd[" << n << "] = " << wTabd[n] << "\n";
    }
    cout << endl;

    cout    << "Napisz jakis adres pomiedzy: "
            << reinterpret_cast<long long>(&osiedle[112])
            << "-"
            << reinterpret_cast<long long>(&osiedle[116])
            << "\na ja tam zbuduje ci obiekt: ";

    int adres;
    cin >> adres;
    gdzie = reinterpret_cast<void *>(adres);
    int * wskA = new (gdzie) int;

    *wskA = 114;
    cout << "Wartosc = " << (*wskA) << endl;
    
    cout << "Popatrzmy na te dzialke\n";

    for (int k = 99; k < 116; ++k)
        cout << "[" << k << "] = " << osiedle[k] << endl;

    delete [] osiedle;
}
#include <iostream>
using namespace std;
//*********************************************
int main()
{
    double zmienna = 0;
    const double stala = 3.14;

    double *wsk_do_zmiennej = &zmienna;
    const double *wsk_do_stalej = &stala;

    const double *wsk2_do_stalej;

    cout << "Na poczatku, stala = " << stala << endl;

    wsk2_do_stalej = wsk_do_zmiennej;

    wsk_do_zmiennej = const_cast<double *>(wsk_do_stalej);

    *wsk_do_zmiennej = -333;
    cout << "Potem ------> stala = " << stala << endl;

    double * const st_wsk_do_zmiennej =
                                const_cast<double * const>(wsk_do_stalej);

    wsk_do_zmiennej = st_wsk_do_zmiennej;

    int * wskint;
    wskint = reinterpret_cast<int *>(const_cast<double *>(wsk_do_stalej));
}
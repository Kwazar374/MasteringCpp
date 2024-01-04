#include <iostream>
using namespace std;

double poczatek_x;
double poczatek_y;
double skala_x = 1;
double skala_y = 1;
//**********************************************************************
inline double wspx(double wspolrzedna)
{
    return ((wspolrzedna - poczatek_x) * skala_x);
}
//**********************************************************************
inline double wspy(double wspolrzedna)
{
    return ((wspolrzedna - poczatek_y) * skala_y);
}
//**********************************************************************
int main()
{
    double x1 = 100, y1 = 100;

    cout << "Mamy punkt o wspolrzednych "
            << " x = " << wspx(x1)
            << " y = " << wspy(y1) << endl;

    // zmieniamy poczatek uklady wspolrzednych
    poczatek_x = 20;
    poczatek_y = -500;

    cout << "Gdy przesuniemy uklad wspolrzednych tak,\n"
            << "ze poczatek znajdzie sie w punkcie "
            << poczatek_x << ", " << poczatek_y
            << "\nto nowe wspolrzedne punktu \n"
            << "w takim ukladzie sa: "
            << " x = " << wspx(x1)
            << " y = " << wspy(y1) << endl;

    // zageszczamy skale na osi poziomiej
    skala_x = 0.5;
    cout << "Gdy dodatkowo zmieniamy skale pozioma tak, ze skala_x = " << skala_x
            << "\nto ten sam punkt ma teraz wspolrzedne: "
            << " x = " << wspx(x1)
            << " y = " << wspy(y1) << endl;
}
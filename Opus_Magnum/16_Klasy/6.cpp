#include <complex>
double kwadrat(const double promien);
/////////////////////////////////////////////////////////////
class Tplansza
{
public:
    static const int ile_pol = 120;
    static constexpr int niezawodnosc = 1000;
    static constexpr double cisnienie = 2.5;

    bool pola_gry[ile_pol];

    static constexpr std::complex<double> zesp {0, -1};

    enum {max_pionow = 16, max_graczy = 4};
    int gracz[max_graczy];
};
/////////////////////////////////////////////////////////////
const int Tplansza::ile_pol;
constexpr int Tplansza::niezawodnosc;
constexpr double Tplansza::cisnienie;
constexpr std::complex<double> Tplansza::zesp;
/////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
/////////////////////////////////////////////////////////////
void fun(const int *wsk)
{
    int wartosc = *wsk;
}
/////////////////////////////////////////////////////////////
double kwadrat(double promien)
{
    return promien * promien;
}
/////////////////////////////////////////////////////////////
int main()
{
    int a = Tplansza::ile_pol;

    cout << "Niezawodnosc = " << Tplansza::niezawodnosc
        << " godzin pracy, Tplansza::cisnienie = " << Tplansza::cisnienie << endl;

    complex<double> kopia_zesp = Tplansza::zesp;
    const complex<double> *wskzesp = & Tplansza::zesp;

    cout << "Za pomoca enum: Tplansza::max_pionow "
        << Tplansza::max_pionow
        << ", a Tplansza::max_graczy " << Tplansza::max_graczy << endl;
}
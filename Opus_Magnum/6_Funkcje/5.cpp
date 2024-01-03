#include <iostream>
using namespace std;
//***************************************************************
void fun_przez_wartosc(int wart);
void fun_referencja_lwartosci(int & przezwisko_lwartosci);
void fun_referen_constlwartosci(const int & przezwisko_stalej_lwartosci);
void fun_referencja_rwartosci(int && przezwisko_wart_chwilowej);
//***************************************************************
void fun_przez_wartosc(int wart)
{
    ++wart;
    cout << "A. fun_przez wartosc odebrala arg. przez wartosc i teraz = " << wart << "\n";
}
//***************************************************************
void fun_referencja_lwartosci(int & przezwisko_lwartosci)
{
    cout << "B. fun_referencja_lwartosci(" << przezwisko_lwartosci
            << ") odebrala arg. jako ref. lwartosci \n";
    ++przezwisko_lwartosci;
}
//***************************************************************
void fun_referen_constlwartosci(const int & przezwisko_stalej_lwartosci)
{
    cout << "C. fun_referen_constlwartosci(" << przezwisko_stalej_lwartosci
            << ") odebrala arg. jako ref. stalej lwartosci\n";
}
//***************************************************************
void fun_referencja_rwartosci(int && przezwisko_wart_chwilowej)
{
    cout << "D. fun_referencja_rwartosci odbierajaca argument jako ref. rwartosc \n";

    // inkrementacja czegos, co jest traktowane jako (chwilowa, zatem nieistotna) rwartosc
    ++przezwisko_wart_chwilowej;
}
//***************************************************************
int main()
{
    int obj = 40;
    fun_przez_wartosc(obj);
    cout << "main: obj = " << obj << endl;
    fun_przez_wartosc(80+1);
    cout << "\n";

    fun_referencja_lwartosci(obj);
    cout << " kontrola, w main obj = " << obj << endl;
    cout << "! fun_referencja_lwartosci(80+2) - niemozliwe wyslanie jej rwartosci \n";
    cout << "\n";

    fun_referen_constlwartosci(obj);
    fun_referen_constlwartosci(80+3);
    const int & przezwisko_stalej_lwartosci = (80 + 3);
    cout << "\n\n";

    cout << "! fun_referencja_rwartosci(obj) - niemozliwe wyslanie lwartosci\n";
    fun_referencja_rwartosci(80+4);
    int && rr2 = (80+4);
    cout << "\n";
}
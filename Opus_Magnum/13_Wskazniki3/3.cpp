#include <iostream>
using namespace std;
void przedzielacz_tabl(const char tab[]);
void przedzielacz_wsk(const char *w);
//*****************************************************
int main()
{
    char ostrzezenie[80] = {"Alarm trzeciego stopnia"};

    cout << "\n wersja tablicowa \n";
    przedzielacz_tabl(ostrzezenie);

    cout << "\n wersja wskaznikowa \n";
    przedzielacz_wsk(ostrzezenie);
}
//*****************************************************
void przedzielacz_tabl(const char tab[])
{
    int n = 0;
    while (tab[n]) {
        cout << tab[n++] << "-";
    }
}
//*****************************************************
void przedzielacz_wsk(const char *w)
{
    while(*w) {
        cout << *(w++) << "-";
    }
}
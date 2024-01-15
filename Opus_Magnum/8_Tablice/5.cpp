#include <iostream>
using namespace std;
#include <cstring>

int main()
{
    char tekst[] = {"Uwaga, tarcza została przepalona!"};
    char komunikat[120];

    strcpy(komunikat, tekst);
    cout << komunikat << endl;

    strncpy(komunikat, "1234567890abcdef", 9);
    cout << komunikat;

    strcpy(komunikat, "--A ku-ku --!");
    cout << "\nNa koniec: " << komunikat << endl;
}
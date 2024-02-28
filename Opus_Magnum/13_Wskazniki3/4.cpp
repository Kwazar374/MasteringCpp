#include <iostream>
using namespace std;

char *strcpy(char *cel, const char *zrodlo);
//*****************************************************
int main()
{
    char poziom[] = {"Poziom szumu w normie"};
    char komunikat[80];

    strcpy(komunikat, poziom);
    cout << poziom << endl;
    cout << komunikat << endl;
}
//*****************************************************
char *strcpy(char *cel, const char *zrodlo)
{
    char *poczatek = cel;

    while(*(cel++) = *(zrodlo++));
    
    return poczatek;
}
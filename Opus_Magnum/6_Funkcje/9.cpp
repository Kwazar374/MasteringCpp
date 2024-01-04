#include <iostream>
using namespace std;
/* ============= deklaracje funkcji ====================*/
void czerwona(void);
void biala(void);
//********************************************************
int main()
{
    czerwona();
    czerwona();
    biala();
    czerwona();
    biala();
}
//********************************************************
void czerwona(void)
{
    static int ktory_raz;
    ktory_raz++;
    cout << "Funkcja czerwona wywolana " << ktory_raz << " raz\n";
}
//*********************************************************
void biala(void)
{
    static int ktory_raz = 100;
    ktory_raz = ktory_raz + 1;
    cout << "Funkcja biala wywolana " << ktory_raz << " raz\n";
}
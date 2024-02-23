#include <iostream>
using namespace std;
void hydraulik(int *wsk_do_kranu);
//***********************************
int main()
{
    int kran = -1;
    cout << "Stan techniczny kranu = " << kran << endl;
    hydraulik(&kran);
    cout << "Po wezwaniu hydraulika stan techniczny kranu = " << kran << endl;
}
//***********************************
void hydraulik(int *wsk_do_kranu)
{
    *wsk_do_kranu = 100;
}
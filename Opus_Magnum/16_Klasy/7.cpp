#include <iostream>
using namespace std;
/////////////////////////////////////////////////////////////
class Tpozycja
{
    int x;
    int y;
public:
    Tpozycja(int a, int b) {x = a; y = b;}
    void wypis(void) const;
    void przesun(int a, int b);
};
/////////////////////////////////////////////////////////////
void Tpozycja::wypis() const {
    cout << x << ", " << y << endl;
}
/////////////////////////////////////////////////////////////
void Tpozycja::przesun(int a, int b) {
    x = a;
    y = b;
}
/////////////////////////////////////////////////////////////
int main()
{
    Tpozycja samochod{40, 50};
    Tpozycja pies{30, 80};
    const Tpozycja dom{50, 50};

    samochod.wypis();
    pies.wypis();
    dom.wypis();

    samochod.przesun(4, 10);
    pies.przesun(50, 50);
}
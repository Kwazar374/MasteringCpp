#include <iostream>
using namespace std;

auto pomnozenie(int a, double b) -> double;
auto dodanie(int k, double r) -> decltype(k);
//*******************************************************
int main()
{
    double x {};
    x = pomnozenie(4, 8.6);
    cout << x << endl;
    auto y = pomnozenie(3, 1.5);
    cout << "Rezultat = " << dodanie(2, 3.4) << endl;
}
//*******************************************************
auto pomnozenie(int a, double b) -> double
{
    return a * b;
}
//*******************************************************
auto dodanie(int k, double r) -> decltype(k)
{
    return k + r;
}
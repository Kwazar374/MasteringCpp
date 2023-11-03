#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int k = i + 011;    // i + 9
    cout << "k=" << k << endl;

    int m = 100;
    int n = 0x100;
    int j = 0100;
    int bin = 0b100; // C++ 14
    cout << "Wypisywanie ich w postaci dziesiatkowej\n m = " << m
        << ", n = " << n << ", j = " << j << ", bin = " << bin << endl;

    cout << "Suma m + n + j = " << (m + n + j) << "\n";
    cout << "Wypisujemy trzy rozne stale: " << 0x22 << ", " << 022 << ", " << 22 << endl;
}
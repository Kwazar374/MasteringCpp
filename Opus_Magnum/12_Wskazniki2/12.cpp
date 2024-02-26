#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;
//****************************************************
void funkcja_obslugujaca();
long rez;
//****************************************************
int main()
{
    set_new_handler(funkcja_obslugujaca);
    try {
        for(rez = 1; ; rez++) {
            new int[1000000000000000000];
        }
    }
    catch(std::bad_alloc &e)
    {
        cout << "Zlapany wyjatek std::bad_alloc" << endl;
    }
}
//****************************************************
void funkcja_obslugujaca()
{
    cout << "Funkcja obslugujaca: pamieci zabraklo przy rezerwacji = " << rez << "!\n";
    // exit(1);
    throw bad_alloc();
}
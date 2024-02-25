#include <iostream>
using namespace std;
//*************************************
int main()
{
    int *czerwony, *zolty;
    
    czerwony = new int;
    zolty = new int;

    *czerwony = 100;
    *zolty = 200;

    cout    << "Po wpisaniu: Na czerwonym = " << *czerwony
            << " Na zoltym = " << *zolty << endl;

    czerwony = zolty; //!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    cout    << "Po przelozeniu - Na czerwonym = " << *czerwony
            << " Na zoltym = " << *zolty << endl;

    *czerwony = 5;
    *zolty = 1;

    cout    << "Jakis wpis - Na czerwonym = " << *czerwony
            << " Na zoltym = " << *zolty << endl;

    delete zolty;
    // delete czerwony; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}
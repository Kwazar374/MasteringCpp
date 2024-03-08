#include <iostream>
using namespace std;
int pierwsza();
int druga();
//***************************************************
int main()
{
    int i;
    int (*wskaz_fun)();
    auto * wskaz_funB = &pierwsza;

    cout << "Na ktora funkcje ma pokazac wskaznik?\npierwsza -\t 1 \nczy druga -\t 2 \n"
            "   napisz numer: ";
    cin >> i;
    switch(i) {
        case 1:
            wskaz_fun = &pierwsza;
            break;
        case 2:
            wskaz_fun = &druga;
            break;
        default:
            wskaz_fun = nullptr;
            break;
    }
    cout << "Wedlug rozkazu!\n";
    if(wskaz_fun) {
        (*wskaz_fun)();
    }
}
//***************************************************
int pierwsza()
{
    cout << "wykonuje sie funkcja pierwsza! \n";
    return 9;
}
//***************************************************
int druga()
{
    cout << "wykonuje sie funkcja druga\n";
    return 106;
}
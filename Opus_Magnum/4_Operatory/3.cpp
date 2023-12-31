#include <iostream>
#include <iso646.h> // this header is needed to use alternative operators. 
                    // Another way to use them is enabling specific compiler option (/Za)
                    // At least in case of VSC
using namespace std;

int main()
{
    int a = 10, b = 20;
    if ((a == 10) and (b == 20)) cout << "True" << endl;
}
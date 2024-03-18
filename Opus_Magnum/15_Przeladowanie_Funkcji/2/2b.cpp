#include <iostream>
using namespace std;
extern void dzwiek(int);
//************************************************************
int main()
{
    dzwiek(1);
    {
        extern void dzwiek(double);
        dzwiek(2);
        dzwiek(3.14);
    }
    dzwiek(5);
    dzwiek(6.28);
}
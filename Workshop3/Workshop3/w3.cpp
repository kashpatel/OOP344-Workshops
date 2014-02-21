//Workshop 3
//C++ Templates
//w3.cpp

#include <iostream>
 using namespace std;
 #include "Array.h"

 int main ( ) {
    Array<int> x(3);
    for (int i = 0; i < 3; i++)
        x[i] = 9 - i;
    x[-1] = 99;
    for (int i = 0; i < 6; i++)
        cout << x[i] << endl;

    Array<> y(2);
    y[0] = 2.1;
    y[1] = 1.1;
    for (int i = 0; i < 2; i++)
        cout << y[i] << endl;
    return 0;
 }
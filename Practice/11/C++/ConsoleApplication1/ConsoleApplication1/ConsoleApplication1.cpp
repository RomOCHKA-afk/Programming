﻿#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int a, b, i, c;

    cin >> a >> b;

    c = a;

    for (i = b - 1; i > 0; i = i - 1) {
        a = a * c;
    }

    cout << a << endl;

    system("pause");
    return(0);
}
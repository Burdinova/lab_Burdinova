﻿#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double x1, x2, y1, y2;
    cout << "x1=";
    cin >> x1;
    cout << "x2=";
    cin >> x2;
    cout << "y1=";
    cin >> y1;
    cout << "y2=";
    cin >> y2;
    cout << "Расстояние между двумя точками=";
    cout << sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return 0;
}


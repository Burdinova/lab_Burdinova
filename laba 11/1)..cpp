﻿/* 1. Даны две переменные целого типа: A и B. Если их значения не равны, то присвоить каждой переменной большее из этих значений, а если равны, 
 то присвоить переменным нулевые значения. Вывести новые значения переменных A и B.*/


#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    cout << "Введите А = ";
    cin >> a;
    cout << "Введите B = ";
    cin >> b;
    if (a == b)
    {
        a = 0;
        b = 0;
        cout << "A="<< a <<"   " << "B=" << b;
    }
    else
    {
        if (a > b) 
        { a = a;
        b = a;
        cout << "A=" << a <<"   " << "B=" << b;
        }
        else 
        {
            a = b;
            b = b;
            cout << "A=" << a <<"   " << "B=" << b;
        }
    }
    return 0;
}
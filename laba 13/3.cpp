﻿// 3. Дано целое число N (> 0). Найти квадрат данного числа, используя для его вычисления следующую формулу:
// N^2 = 1 + 3 + 5 + . . . + (2·N − 1). После добавления к сумме каждого слагаемого выводить текущее значение суммы

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double n, s, i;
    cout << "Найти квадрат данного числа" << endl;
    cout << "Введите число N: ";
    cin >> n;
    s = 0;
    for (int i = 1; i <= (2 * n - 1); i=i+2)
    {
        s = s+i;
        cout << s << endl;
    };
    return 0;
}
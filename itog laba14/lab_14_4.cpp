﻿/*4. Начальный вклад в банке равен 1000 руб. Через каждый месяц размер вклада увеличивается на P процентов от имеющейся суммы (P — вещественное число, 0 < P < 25).
По данному P определить, через сколько месяцев размер вклада превысит 1100 руб.,
и вывести найденное количество месяцев K (целое число) и итоговый размер вклада S (вещественное число).*/

#include <iostream>
using namespace std;
int lab_14_4()
{
    setlocale(LC_ALL, "Rus");
    double p, s, k;
    cout << "Oпределить, через сколько месяцев размер вклада превысит 1100 руб., и вывести найденное количество месяцев K(целое число) и итоговый размер вклада S" << endl;
    cout << "Дано S=1000 руб." << endl;
    cout << "Введите P (P — вещественное число, 0 < P < 25)= ";
    cin >> p;
    k = 0;
    s = 1000;
    while (s <= 1100)
    {
        s = s + (s * p / 100);
        k++;
    }
    cout << "K=" << k << endl;
    cout << "S=" << s << endl;
    return 0;
}

﻿#include <iostream>
using namespace std;
int lab_15_1();
int lab_15_2();
int lab_15_3();
int lab_15_4();
int lab_15_5();

int main()
{
    int f = 10;
    setlocale(LC_ALL, "Rus");
    while (f != 1024) {
        system("cls");
        int f;
        cout << "___________________________" << endl;
        cout << "Лабораторная работа Бурдиновой Инны 211-722" << endl;
        cout << "___________________________" << endl;
        cout << "1. Описать функцию PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B. С помощью этой функции найти третьи степени пяти данных чисел." << endl;
        cout << "2. Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения:−1, если X < 0; 0, если X = 0; 1, если X > 0. С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B." << endl;;
        cout << "3. Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного между двумя окружностями с общим центром и радиусами R1 и R2. С ее помощью найти площади трех колец, для которых даны внешние и внутренние радиусы." << endl;
        cout << "4. Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти, в которой находится точка с ненулевыми вещественными координатами(x, y). С помощью этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами" << endl;
        cout << "5. Описать функцию Fact2(N) вещественного типа, вычисляющую двойной факториал:N!!= 1·3·5·. ..·N, если N — нечетное; N!!= 2·4·6·. ..·N, если N — четное " << endl;
        cout << "___________________________" << endl;
        cout << "ДЛЯ ЗАВЕРШЕНИЯ НАЖМИТЕ 1024"<<endl;
        cout << "___________________________" << endl;
        cout << "Введите номер задачи от 1 до 5" << endl;
        cout << "№: ";
        cin >> f;
        system("cls");
        switch (f) {
        case 1:
            lab_15_1();
            break;
        case 2:
            lab_15_2();
            break;
        case 3:
            lab_15_3();
            break;
        case 4:
            lab_15_4();
            break;
        case 5:
            lab_15_5();
            break;
        }
    }
}
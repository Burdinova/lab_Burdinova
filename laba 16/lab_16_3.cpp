/*3. ���� ����� ����� N (> 2), A � B. ������������ � ������� ������������� ������ ������� N,
������ ������� �������� ����� A, ������ ����� B, � ������ ����������� ������� ����� ����� ���� ����������*/

#include <iostream>
using namespace std;
int lab_16_3()
{
    int f = 10;
    while (f != 1024)
    {
    setlocale(LC_ALL, "Rus");
    int n, k, a, b;
    int arr[200];
    cout << "���� ����� ����� N (> 2), A � B. ������������ � ������� ������������� ������ ������� N," << endl;
    cout << "������ ������� �������� ����� A, ������ ����� B, � ������ ����������� ������� ����� ����� ���� ����������" << endl;
    cout << "������� ����� N (> 2)" << endl;
    cin >> n;
    cout << "������� ������ ������� A" << endl;
    cin >> a;
    cout << "������� ������ ������� B" << endl;
    cin >> b;
    cout << "arr[0]= " << a << endl;
    cout << "arr[1]= " << b << endl;
    arr[0] = a;
    arr[1] = b;
    k = a + b;
    for (int i = 2; i < n; i++)
    {
        arr[i] = k;
        cout << "arr[" << i << "]= " << arr[i] << endl;
        k = k + arr[i];
    }
    system("pause");
    return 0;
    }
}
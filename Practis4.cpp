#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int n, Qwi;
    int opo = 0;
    cout << "������� ������ �������: ";
    cin >> n;
    int* arr = new int[n];
    int a = 0;
    cout << "������� ������ ���������� ������� 1-���� 2 - ������: ";
    cin >> a;
    switch (a)
    {
    case 1:
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] = rand() % 100000;
            cout << arr[i] << "  ";
        }
        cout << endl;
        break;
    }
    case 2:
    {

        for (int j = 0; j < 10; j++)
        {
            cin >> arr[j];
        }
        break;
    }

    }
    cout << "������� ����� ������� ���� �����: ";
    cin >> Qwi;
    if (arr[n - 1] != Qwi)
    {
        arr[n - 1] = Qwi;
        for (; arr[opo] != Qwi; opo++);
        opo++;
    }
    else
    {
        cout << n;
        return 0;
    }
    cout << "������� ���������� ����� �����: " << opo;
}
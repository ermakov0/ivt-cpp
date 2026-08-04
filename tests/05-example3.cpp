// Дан целочисленный массив размера N.
// Вывести все пары соседних элементов (A1, A2), (A2, A3)...,
// в которых оба числа положительные.
#include <iostream>

using namespace std;

int main()
{
    size_t len;

    cout << "Введите длину массива: ";
    cin >> len;

    int *a = new int[len];

    cout << "Введите элементы массива a (через пробел): ";
    for (size_t i = 0; i < len; i++)
    {
        cin >> a[i];
    }

    for (size_t i = 0; i < len - 1; i++)
    {
        if (a[i] >= 0 && a[i + 1] > 0)
        {
            cout << '(' << a[i] << ", " << a[i + 1] << ')' << endl;
        }
    }

    delete[] a;
}

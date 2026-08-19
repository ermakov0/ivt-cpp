// Дан целочисленный массив A размера N.
// Переписать в новый целочисленный массив B все положительные числа
// из исходного массива (в том же порядке).
// Вывести размер полученного массива B и его содержимое.
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

    size_t j = 0;
    for (size_t i = 0; i < len; i++)
    {
        if (a[i] > 0)
        {
            j++;
        }
    }

    int *b = new int[j];
    j = 0;

    for (size_t i = 0; i < len; i++)
    {
        if (a[i] > 0)
        {
            b[j] = a[i];
            j++;
        }
    }

    cout << "Длина массива b: " << j << endl;
    for (size_t i = 0; i < j; i++)
    {
        cout << b[i] << ' ';
    }
    cout << endl;

    delete[] a;
    delete[] b;
}

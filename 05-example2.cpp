// Дан целочисленный массив A размера N.
// Переписать в новый целочисленный массив B все положительные числа
// из исходного массива (в том же порядке).
// Вывести размер полученного массива B и его содержимое.
#include <iostream>

using namespace std;

int main()
{
    size_t len, j = 0;
    const size_t MAX_SIZE = 10;
    int a[MAX_SIZE], b[MAX_SIZE];

    cout << "Введите длину массива: ";
    cin >> len;

    if (len > MAX_SIZE)
    {
        cerr << "Ошибка: длина не может быть больше " << MAX_SIZE << endl;
        return 1;
    }

    cout << "Введите элементы массива a (через пробел): ";
    for (size_t i = 0; i < len; i++)
    {
        cin >> a[i];
    }

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
}

// $ ./05-example2.out 
// Введите длину массива: 6
// Введите элементы массива a (через пробел): 1 2 -3 4 5 6
// Длина массива b: 5
// 1 2 4 5 6

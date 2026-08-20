// Дан целочисленный массив размера N.
// Вывести все пары соседних элементов (A1, A2), (A2, A3)...,
// в которых оба числа положительные.
#include <iostream>

using namespace std;

int main()
{
    size_t len;
    const size_t MAX_SIZE = 10;
    int a[MAX_SIZE];

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

    for (size_t i = 0; i < len - 1; i++)
    {
        if (a[i] > 0 && a[i + 1] > 0)
        {
            cout << '(' << a[i] << ", " << a[i + 1] << ')' << endl;
        }
    }
}

// $ ./05-example1.out 
// Введите длину массива: 6
// Введите элементы массива a (через пробел): 1 2 -3 4 5 6
// (1, 2)
// (4, 5)
// (5, 6)

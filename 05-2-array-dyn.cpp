#include <iostream>

using namespace std;

int main()
{
    size_t len;

    cout << "Введите длину массива: ";
    cin >> len;

    int *a = new int[len];
    int *b = new int[len];
    int *res = new int[len];

    cout << "Введите элементы массива a (через пробел): ";
    for (size_t i = 0; i < len; i++)
    {
        cin >> a[i];
    }

    cout << "Введите элементы массива b (через пробел): ";
    for (size_t i = 0; i < len; i++)
    {
        cin >> b[i];
    }

    // res = a + b
    for (size_t i = 0; i < len; i++)
    {
        res[i] = a[i] + b[i];
    }

    cout << "Массив res: ";
    for (size_t i = 0; i < len; i++)
    {
        cout << res[i] << ' ';
    }
    cout << endl;

    delete[] a;
    delete[] b;
    delete[] res;
}

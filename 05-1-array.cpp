#include <iostream>

using namespace std;

const size_t MAX_SIZE = 50;

int main()
{
    size_t len;
    int a[MAX_SIZE], b[MAX_SIZE], res[MAX_SIZE];

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

    cout << "Введите элементы массива b (через пробел): ";
    for (size_t i = 0; i < len; i++)
    {
        cin >> b[i];
    }

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
}

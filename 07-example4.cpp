// Для любого задания лабораторных работ №5 и №6 реализовать ввод,
// формирование/обработку и вывод массивов с применением функций.
#include <iostream>

using namespace std;

void array_read(int *arr, size_t len);
void array_print(const int *arr, size_t len);
void array_sum(const int *arr1, const int *arr2, size_t len, int *res);

int main()
{
    size_t len;

    cout << "Введите длину массива: ";
    cin >> len;

    int *a = new int[len];
    int *b = new int[len];
    int *res = new int[len];

    cout << "Введите элементы массива a (через пробел): ";
    array_read(a, len);
    cout << "Введите элементы массива b (через пробел): ";
    array_read(b, len);

    array_sum(a, b, len, res /*out*/);

    cout << "Массив res: ";
    array_print(res, len);

    delete[] a;
    delete[] b;
    delete[] res;
}

void array_read(int *arr, size_t len)
{
    for (size_t i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
}

void array_print(const int *arr, size_t len)
{
    for (size_t i = 0; i < len; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void array_sum(const int *arr1, const int *arr2, size_t len, int *res)
{
    // res = arr1 + arr2
    for (size_t i = 0; i < len; i++)
    {
        res[i] = arr1[i] + arr2[i];
    }
}

// $ ./07-example4.out 
// Введите длину массива: 6
// Введите элементы массива a (через пробел): 1 2 4 5 8 4
// Введите элементы массива b (через пробел): -25 5 1 4 5 0
// Массив res: -24 7 5 9 13 4

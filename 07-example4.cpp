#include <iostream>

using namespace std;

void array_read(int *arr, size_t len);
void array_print(const int *arr, size_t len);
int *array_sum(const int *arr1, const int *arr2, size_t len);

int main()
{
    size_t len;

    cout << "Введите длину массива: ";
    cin >> len;

    int *a = new int[len];
    int *b = new int[len];

    cout << "Введите элементы массива a (через пробел): ";
    array_read(a, len);
    cout << "Введите элементы массива b (через пробел): ";
    array_read(b, len);

    int *res = array_sum(a, b, len);

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

int *array_sum(const int *arr1, const int *arr2, size_t len)
{
    int *res = new int[len];
    // res = arr1 + arr2
    for (size_t i = 0; i < len; i++)
    {
        res[i] = arr1[i] + arr2[i];
    }
    return res;
}

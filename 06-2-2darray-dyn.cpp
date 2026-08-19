#include <iostream>

using namespace std;

int main()
{
    size_t rows, cols;

    cout << "Введите количество строк матрицы: ";
    cin >> rows;
    cout << "Введите количество столбцов матрицы: ";
    cin >> cols;

    int **arr = new int *[rows];
    for (size_t i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    int *b = new int[cols];
    int *res = new int[rows];

    cout << "Введите элементы матрицы arr (построчно через пробел):" << endl;
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Введите элементы вектора b (через пробел):" << endl;
    for (size_t j = 0; j < cols; j++)
    {
        cin >> b[j];
    }

    // res = arr * b
    for (size_t i = 0; i < rows; i++)
    {
        res[i] = 0;
        for (size_t j = 0; j < cols; j++)
        {
            res[i] += arr[i][j] * b[j];
        }
    }

    cout << "Вектор res:" << endl;
    for (size_t i = 0; i < rows; i++)
    {
        cout << res[i] << ' ';
    }
    cout << endl;

    for (size_t i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] b;
    delete[] res;
}

#include <iostream>

using namespace std;

int main()
{
    size_t rows, cols;

    cout << "Введите количество строк матрицы: ";
    cin >> rows;
    cout << "Введите количество столбцов матрицы: ";
    cin >> cols;

    int **m = new int *[rows];
    for (size_t i = 0; i < rows; i++)
    {
        m[i] = new int[cols];
    }
    int *b = new int[cols];
    int *res = new int[rows];

    cout << "Введите элементы матрицы m (построчно через пробел):" << endl;
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            cin >> m[i][j];
        }
    }

    cout << "Введите элементы вектора b (через пробел):" << endl;
    for (size_t j = 0; j < cols; j++)
    {
        cin >> b[j];
    }

    // res = m * b
    for (size_t i = 0; i < rows; i++)
    {
        res[i] = 0;
        for (size_t j = 0; j < cols; j++)
        {
            res[i] += m[i][j] * b[j];
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
        delete[] m[i];
    }
    delete[] b;
    delete[] res;
}

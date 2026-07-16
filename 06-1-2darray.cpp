#include <iostream>

using namespace std;

const size_t MAX_SIZE = 10;

int main()
{
    size_t rows, cols;
    int m[MAX_SIZE][MAX_SIZE], b[MAX_SIZE], res[MAX_SIZE];

    cout << "Введите количество строк матрицы: ";
    cin >> rows;
    cout << "Введите количество столбцов матрицы: ";
    cin >> cols;

    if (rows > MAX_SIZE || cols > MAX_SIZE)
    {
        cerr << "Ошибка: ни одна из сторон матрицы не может быть больше " << MAX_SIZE << endl;
        return 1;
    }

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
}

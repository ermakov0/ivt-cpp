// Даны размеры матрицы M x N.
// Заполнить матрицу по следующему правилу:
// каждый элемент равен минимуму от номеров строк и столбцов.
// Вывести полученную матрицу в консоль.
#include <iostream>

using namespace std;

int main()
{
    size_t n, m;

    cout << "Введите количество строк матрицы: ";
    cin >> n;
    cout << "Введите количество столбцов матрицы: ";
    cin >> m;

    int **arr = new int *[n];
    for (size_t i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if (i < j)
            {
                arr[i][j] = (int)i;
            }
            else
            {
                arr[i][j] = (int)j;
            }
            // arr[i][j] = (int)(i < j ? i : j);
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    for (size_t i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

// $ ./06-example3.out 
// Введите количество строк матрицы: 3 
// Введите количество столбцов матрицы: 4
// 0 0 0 0 
// 0 1 1 1 
// 0 1 2 2

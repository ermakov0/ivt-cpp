// Даны две матрицы размерами M x N.
// Заполнить новую матрицу по следующему правилу:
// центральная треть столбцов из первой матрицы, остальные - из второй
#include <iostream>

using namespace std;

int main()
{
    size_t n, m;

    cout << "Введите количество строк матрицы: ";
    cin >> n;
    cout << "Введите количество столбцов матрицы: ";
    cin >> m;

    int **arr1 = new int *[n];
    for (size_t i = 0; i < n; i++)
    {
        arr1[i] = new int[m];
    }
    int **arr2 = new int *[n];
    for (size_t i = 0; i < n; i++)
    {
        arr2[i] = new int[m];
    }
    int **res = new int *[n];
    for (size_t i = 0; i < n; i++)
    {
        res[i] = new int[m];
    }

    cout << "Введите элементы матрицы arr1 (построчно через пробел):" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Введите элементы матрицы arr2 (построчно через пробел):" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cin >> arr2[i][j];
        }
    }

    const size_t BEG = m / 3;
    const size_t END = (m / 3) * 2;
    for (size_t j = 0; j < m; j++)
    {
        if (j >= BEG && j < END)
        {

            for (size_t i = 0; i < n; i++)
            {
                res[i][j] = arr1[i][j];
            }
        }
        else
        {
            for (size_t i = 0; i < n; i++)
            {
                res[i][j] = arr2[i][j];
            }
        }
    }

    cout << "Матрица res:" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }

    for (size_t i = 0; i < n; i++)
    {
        delete[] arr1[i];
    }
    delete[] arr1;
    for (size_t i = 0; i < n; i++)
    {
        delete[] arr2[i];
    }
    delete[] arr2;
    for (size_t i = 0; i < n; i++)
    {
        delete[] res[i];
    }
    delete[] res;
}

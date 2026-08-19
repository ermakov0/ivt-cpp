// Даны две матрицы размерами M x N.
// Заполнить новую матрицу по следующему правилу:
// центральная треть столбцов из первой матрицы, остальные - из второй
#include <iostream>

using namespace std;

int main()
{
    size_t n, m;
    const size_t MAX_SIZE = 10;
    int arr1[MAX_SIZE][MAX_SIZE];
    int arr2[MAX_SIZE][MAX_SIZE];
    int res[MAX_SIZE][MAX_SIZE];

    cout << "Введите количество строк матрицы: ";
    cin >> n;
    cout << "Введите количество столбцов матрицы: ";
    cin >> m;

    if (n > MAX_SIZE || m > MAX_SIZE)
    {
        cerr << "Ошибка: ни одна из сторон матрицы не может быть больше " << MAX_SIZE << endl;
        return 1;
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
}

// Даны размеры матрицы M x N.
// Заполнить матрицу по следующему правилу:
// каждый элемент равен минимуму от номеров строк и столбцов.
// Вывести полученную матрицу в консоль.
#include <iostream>

using namespace std;

int main()
{
    size_t n, m;
    const size_t MAX_SIZE = 10;
    int arr[MAX_SIZE][MAX_SIZE];

    cout << "Введите количество строк матрицы: ";
    cin >> n;
    cout << "Введите количество столбцов матрицы: ";
    cin >> m;

    if (n > MAX_SIZE || m > MAX_SIZE)
    {
        cerr << "Ошибка: ни одна из сторон матрицы не может быть больше " << MAX_SIZE << endl;
        return 1;
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
}

// $ ./06-example1.out 
// Введите количество строк матрицы: 3
// Введите количество столбцов матрицы: 4
// 0 0 0 0 
// 0 1 1 1 
// 0 1 2 2

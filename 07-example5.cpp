// Для любого задания лабораторных работ №5 и №6 реализовать ввод,
// формирование/обработку и вывод массивов с применением функций.
//
// Даны две матрицы размерами M x N.
// Заполнить новую матрицу по следующему правилу:
// центральная треть столбцов из первой матрицы, остальные - из второй
#include <iostream>

using namespace std;

int **array_new(size_t rows, size_t cols);
void array_delete(int **arr, size_t rows);
void array_read(int **arr, size_t rows, size_t cols);
void array_print(int **arr, size_t rows, size_t cols);
// void array_print(const int *const *arr, size_t rows, size_t cols);
void array_process(int **res, int **arr1, int **arr2, size_t rows, size_t cols);
// void array_process(int **res, const int *const *arr1, const int *const *arr2,
//                    size_t rows, size_t cols);

int main()
{
    size_t n, m;

    cout << "Введите количество строк матрицы: ";
    cin >> n;
    cout << "Введите количество столбцов матрицы: ";
    cin >> m;

    int **arr1 = array_new(n, m);
    int **arr2 = array_new(n, m);
    int **res = array_new(n, m);

    cout << "Введите элементы матрицы arr1 (построчно через пробел):" << endl;
    array_read(arr1, n, m);
    cout << "Введите элементы матрицы arr2 (построчно через пробел):" << endl;
    array_read(arr2, n, m);

    array_process(res, arr1, arr2, n, m);

    cout << "Матрица res:" << endl;
    array_print(res, n, m);

    array_delete(arr1, n);
    array_delete(arr2, n);
    array_delete(res, n);
}

int **array_new(size_t rows, size_t cols)
{
    int **arr = new int *[rows];
    for (size_t i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    return arr;
}

void array_delete(int **arr, size_t rows)
{
    for (size_t i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

void array_read(int **arr, size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void array_print(int **arr, size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

void array_process(int **res, int **arr1, int **arr2, size_t rows, size_t cols)
{
    const size_t BEG = cols / 3;
    const size_t END = (cols / 3) * 2;
    for (size_t j = 0; j < cols; j++)
    {
        if (j >= BEG && j < END)
        {
            for (size_t i = 0; i < rows; i++)
            {
                res[i][j] = arr1[i][j];
            }
        }
        else
        {
            for (size_t i = 0; i < rows; i++)
            {
                res[i][j] = arr2[i][j];
            }
        }
    }
}

// $ ./07-example5.out 
// Введите количество строк матрицы: 3
// Введите количество столбцов матрицы: 6
// Введите элементы матрицы arr1 (построчно через пробел):
// 1 2 3 4 5 6
// 2 3 4 5 6 7
// 3 4 4 4 4 4    
// Введите элементы матрицы arr2 (построчно через пробел):
// 0 0 0 0 0 0
// 1 1 1 1 1 1
// 0 0 0 0 0 0
// Матрица res:
// 0 0 3 4 0 0 
// 1 1 4 5 1 1 
// 0 0 4 4 0 0

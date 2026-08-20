// Дан целочисленный массив A размера N.
// Переписать в новый целочисленный массив B все положительные числа
// из исходного массива (в том же порядке).
// Вывести размер полученного массива B и его содержимое.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("tests/05-example2.stdin");
    ofstream fout("/tmp/05-example2.stdout");
    if (!fin.is_open())
    {
        cerr << "Ошибка открытия файла" << std::endl;
        return 1;
    }
    if (!fout.is_open())
    {
        cerr << "Ошибка открытия файла" << std::endl;
        return 1;
    }

    size_t len;
    fin >> len;
    int *a = new int[len];
    for (size_t i = 0; i < len; i++)
    {
        fin >> a[i];
    }
    fin.close();

    size_t j = 0;
    for (size_t i = 0; i < len; i++)
    {
        if (a[i] > 0)
        {
            j++;
        }
    }

    int *b = new int[j];
    j = 0;

    for (size_t i = 0; i < len; i++)
    {
        if (a[i] > 0)
        {
            b[j] = a[i];
            j++;
        }
    }

    fout /*<< "Длина массива b: "*/ << j << endl;
    for (size_t i = 0; i < j; i++)
    {
        fout << b[i] << ' ';
    }
    fout << endl;

    fout.close();

    delete[] a;
    delete[] b;
}

// $ cat tests/05-example2.stdin 
// 6
// 1 2 -3 4 5 6
// $ ./10-example1.out 
// $ cat /tmp/05-example2.stdout
// 5
// 1 2 4 5 6 

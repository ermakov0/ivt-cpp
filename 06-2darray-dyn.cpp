#include <iostream>
#include <clocale>

using namespace std;

/**
 * @brief Л/р 6 Двумерные массивы
 *
 * В двумерном массиве хранится информация о баллах, полученных
 * спортсменами-пятиборцами в каждом из пяти видов спорта.
 * Необходимо упорядочить строки двумерного массива
 * по возрастанию общей суммы баллов, набранных каждым спортсменом.
*/
int main() {
    setlocale(LC_ALL, "ru");

    size_t count;
    cout << "Укажите количество спортсменов: ";
    cin >> count;
    if (count == 0) {
        cerr << "Ошибка: количество должно быть больше нуля" << endl;
        return 1;
    }

    const size_t COLS = 5;
    /// Указатель на массив указателей на строки матрицы
    int** array;
    // Выделение памяти под массив указателей на строки матрицы
    array = new int* [count];
    for (size_t i = 0; i < count; i++) {
        // Выделение памяти под строки матрицы
        array[i] = new int[COLS];
    }

    cout << "Укажите баллы спортсменов-пятиборцев (" << COLS << " в строке)\n";
    for (size_t i = 0; i < count; i++) {
        for (size_t j = 0; j < COLS; j++) {
            cin >> array[i][j];
            // TODO array[i][j] > 0
        }
    }

    int* sums = new int[count];
    for (size_t i = 0; i < count; i++) {
        sums[i] = 0;
        for (size_t j = 0; j < COLS; j++) {
            sums[i] += array[i][j];
        }
    }

    cout << "Исходные баллы спортсменов-пятиборцев:\n";
    for (size_t i = 0; i < count; i++) {
        for (size_t j = 0; j < COLS; j++) {
            cout << array[i][j] << "\t";
        }
        cout << "| " << sums[i] << "\n";
    }

    // сортировка массива пузырьком по возрастанию и перестановка строк матрицы
    /*
    * TODO
    long buf_sum;
    int nmin, buf_a;
    for (int i = 0; i < nrow - 1; i++)
    {
        nmin = i;
        for (int j = i + 1; j < nrow; j++)
            if (sum[j] < sum[nmin])
                nmin = j;
        buf_sum = sum[i];
        sum[i] = sum[nmin]; sum[nmin] = buf_sum;
        for (int j = 0; j < ncol; j++)
        {
            buf_a = a[i][j];
            a[i][j] = a[nmin][j];
            a[nmin][j] = buf_a;
        }
    }
    */

    cout << "Баллы спортсменов-пятиборцев, упорядоченные по cумме баллов:\n";
    for (size_t i = 0; i < count; i++) {
        for (size_t j = 0; j < COLS; j++) {
            cout << array[i][j] << "\t";
        }
        cout << "| " << sums[i] << "\n";
    }

    delete[] sums;
    for (size_t i = 0; i < count; i++) {
        delete[] array[i];
    }
    delete[] array;
}

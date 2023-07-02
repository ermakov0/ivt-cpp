#include <iostream>
#include <clocale>

using namespace std;

/**
 * @brief Л/р 6 Двумерные массивы
 *
 * В двумерном массиве хранится информация о баллах, полученных
 * спортсменами-пятиборцами в каждом из пяти видов спорта.
 * Необходимо найти минимальное суммарное количество баллов, набранных спортсменом.
*/
int main() {
    setlocale(LC_ALL, "ru");

    const size_t MAX_ROWS = 50;
    const size_t COLS = 5;
    int array[MAX_ROWS][COLS];

    size_t count;
    cout << "Укажите количество спортсменов: ";
    cin >> count;
    if (!(1 <= count && count <= MAX_ROWS)) {
        cerr << "Ошибка: количество должно находиться в диапазоне [1; "
            << MAX_ROWS << "]" << endl;
        return 1;
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

    // поиск минимального суммарного количества баллов
    int min = sums[0];
    for (size_t i = 1; i < count; i++) {
        if (sums[i] < min) {
            min = sums[i];
        }
    }
    delete[] sums;

    cout << "Минимальное суммарное количество баллов=" << min << "\n";
}

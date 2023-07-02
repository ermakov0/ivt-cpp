#include <iostream>
#include <clocale>

using namespace std;

/**
 * @brief Л/р 5 Одномерные массивы
 *
 * В одномерном массиве хранится информация о результатах соревнования
 * по плаванию (время заплыва спортсменов в секундах).
 * Необходимо найти наилучшее время заплыва.
 * Ввод значений массива производится с клавиатуры.
 *
 * @return 0 - всё ок, 1 - ошибка ввода
*/
int main() {
    setlocale(LC_ALL, "ru");

    size_t count;
    cout << "Укажите количество спортсменов: ";
    cin >> count;
    if (count == 0) {
        cerr << "Ошибка: количество должно быть больше нуля." << endl;
        return 1;
    }

    /// Указатель на массив
    int* array;
    // выделение памяти динамического массива
    array = new int[count];

    cout << "Введите время заплыва спортсменов (в секундах):\n";
    for (size_t i = 0; i < count; i++) {
        cin >> array[i];
        // TODO array[i] > 0
    }

    int min = array[0];
    for (size_t i = 1; i < count; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    // освобождение памяти динамического массива
    delete[] array;

    cout << "Лучшее время заплыва=" << min << endl;
}

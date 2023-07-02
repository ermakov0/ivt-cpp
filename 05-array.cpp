#include <iostream>
#include <clocale>

using namespace std;

/**
 * @brief Л/р 5 Одномерные массивы
 *
 * В одномерном массиве хранится информация о результатах соревнования
 * по плаванию (время заплыва спортсменов в секундах).
 * Необходимо найти среднее время заплыва.
 * Ввод значений массива производится с клавиатуры
 *
 * @return 0 - всё ок, 1 - ошибка ввода
*/
int main() {
    setlocale(LC_ALL, "ru");

    const size_t MAX_SIZE = 50;
    /// Массив для хранения времени заплыва спортсменов
    int array[MAX_SIZE];
    size_t count;
    cout << "Укажите количество спортсменов: ";
    cin >> count;
    if (!(1 <= count && count <= MAX_SIZE)) {
        cerr << "Ошибка: количество должно находиться в диапазоне [1; "
            << MAX_SIZE << "]" << endl;
        return 1;
    }
    cout << "Введите время заплыва спортсменов (в секундах):\n";
    for (size_t i = 0; i < count; i++) {
        cin >> array[i];
        // TODO array[i] > 0
    }

    double result = 0;
    for (size_t i = 0; i < count; i++) {
        result += array[i];
    }
    result /= count;

    cout << "Среднее время заплыва=" << result << endl;
}

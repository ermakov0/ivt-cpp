#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

/**
 * @brief Л/р 3 ветвящийся вычислительный процесс
 *
 * Известно, что для каждого человека существует оптимальное значение веса,
 * которое можно вычислить по формуле: Рост (см) - 100.
 * Реальный вес может отличаться от оптимального: вес может быть
 * меньше оптимального, равняться ему или превышать оптимальное значение.
 * Программа запрашивает вес и рост, вычисляет оптимальное значение,
 * сравнивает его с реальным весом и выводит сообщение.
 *
 * @return 0 - всё ок, 1 - ошибка ввода
*/
int main() {
    setlocale(LC_ALL, "ru");

    /// Точность вычислений
    const double E = 0.01;
    double weight, height;

    cout << "Укажите ваш вес (кг): ";
    cin >> weight;
    cout << "Укажите ваш рост (см): ";
    cin >> height;

    // валидация пользовательского ввода
    if (weight <= 0.0) {
        cerr << "Ошибка: вес должен быть больше нуля" << endl;
        return 1;
    }
    if (height <= 0.0) {
        cerr << "Ошибка: рост должен быть больше нуля" << endl;
        return 1;
    }

    /// Оптимальный вес
    double result = height - 100.0;
    cout << "Оптимальный вес = рост - 100 = " << result << " кг." << endl;

    // if (weight == result) {
    if (abs(weight - result) < E) {
        cout << "Вы в хорошей форме!" << endl;
    }
    else if (weight > result) {
        cout << "Надо похудеть на " << (weight - result) << " кг." << endl;
    }
    else {
        cout << "Вам нужно поправиться на " << (result - weight) << " кг." << endl;
    }
}

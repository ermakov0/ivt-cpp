#include <iostream>
#include <clocale>
#include <ctime>
#include <cstdlib>

using namespace std;

/**
 * @brief Л/р 4 Циклы
 *
 * Игра "угадай число". Программа загадывает число, пользователь угадывает.
 * В случае неправильного ответа, программа даёт подсказку "больше" или "меньше".
*/
int main() {
    setlocale(LC_ALL, "ru");

    /// Текущее время для инициализации генератора случайных чисел
    time_t current_time = time(NULL);
    srand((unsigned int)current_time);

    /// Максимальное загадываемое число
    const int MAX = 50;
    const int number = rand() % (MAX + 1);
    int answer;

    cout << "Я загадал число в диапазоне от 0 до " << MAX
        << " включительно. Попробуйте его угадать.\n";
    do {
        cout << "Введите число: ";
        cin >> answer;
        if (number < answer) {
            cout << "Не угадали, загаданное число меньше.\n";
        }
        else if (number > answer) {
            cout << "Не угадали, загаданное число больше.\n";
        }
        // else {
        //    break;
        // }
    } while (answer != number);
    cout << "Вы угадали! Поздравляем.\n";
}

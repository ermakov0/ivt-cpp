#include <iostream>
#include <clocale>
#include <ctime>
#include <cstdlib>

using namespace std;

/**
 * @brief Л/р 4 Циклы
 *
 * Программа выводит 10 примеров на знание таблицы умножения и выставляет оценку:
 * за 10 правильных ответов - "отлично", за 9 и 8 - "хорошо",
 * за 7 - "удовлетворительно", за 6 и менее - "плохо".
*/
int main() {
    setlocale(LC_ALL, "ru");

    /// Текущее время для инициализации генератора случайных чисел
    time_t current_time = time(NULL);
    // Those are fine for educational purposes and to illustrate the point sometimes
    // but for any serious use they are mostly useless
    srand((unsigned int)current_time);

    /// Количество правильных ответов
    int count = 0;
    int number1, number2, result, answer;

    for (int i = 0; i < 10; i++) {
        // число от 2 до 9
        number1 = rand() % 7 + 2;
        number2 = rand() % 7 + 2;
        result = number1 * number2;
        cout << number1 << " x " << number2 << " = ";
        cin >> answer;
        if (answer == result) {
            count++;
            continue;
        }
        cout << "Вы ошиблись!"
            << " " << number1 << " x " << number2 << " = " << result << endl;
    }  // end for

    /// Итоговая оценка
    int rating = 2;
    switch (count)
    {
    case 10: rating = 5; break;
    case 9:
    case 8: rating = 4; break;
    case 7: rating = 3; break;
    // default: rating = 2; break;
    }

    cout << "Правильных ответов: " << count << "\n"
        << "Ваша оценка: " << rating << endl;
}

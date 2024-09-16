/**
 * Л/р 4 Циклы
 *
 * Игра "угадай число". Программа загадывает число, пользователь угадывает.
 * В случае неправильного ответа, программа даёт подсказку "больше" или "меньше".
 *
 * ПРИМЕР:
```
Я загадал число в диапазоне от 0 до 50 включительно. Попробуйте его угадать.
Введите число: 25
Не угадали, загаданное число больше.
Введите число: 38
Не угадали, загаданное число больше.
Введите число: 44
Не угадали, загаданное число меньше.
Введите число: 41
Вы угадали! Поздравляем.
```
*/
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <windows.h>

// Максимальное загадываемое число
const int MAX_NUMBER = 50;

int main()
{
    system("chcp 1251 > nul");

    // Those are fine for educational purposes and to illustrate the point sometimes
    // but for any serious use they are mostly useless
    // Текущее время для инициализации генератора случайных чисел
    const time_t current_time = time(NULL);
    srand((unsigned int)current_time);

    const int number = rand() % (MAX_NUMBER + 1);
    int answer;

    std::cout << "Я загадал число в диапазоне от 0 до " << MAX_NUMBER
        << " включительно. Попробуйте его угадать." << std::endl;
    do
    {
        std::cout << "Введите число: ";
        std::cin >> answer;
        if (number < answer)
        {
            std::cout << "Не угадали, загаданное число меньше." << std::endl;
        }
        else if (number > answer)
        {
            std::cout << "Не угадали, загаданное число больше." << std::endl;
        }
        // else
        // {
        //    break;
        // }
    } while (answer != number);

    std::cout << "Вы угадали! Поздравляем." << std::endl;
    return 0;
}

/**
 * Л/р 4 Циклы
 *
 * Программа выводит 10 примеров на знание таблицы умножения и выставляет оценку:
 * за 10 правильных ответов - "отлично", за 9 и 8 - "хорошо",
 * за 7 - "удовлетворительно", за 6 и менее - "плохо".
 *
 * ПРИМЕР:
```
3 x 7 = 21
2 x 3 = 6
3 x 7 = 7
Вы ошиблись! 3 x 7 = 21
6 x 7 = 42
2 x 4 = 8
6 x 4 = 4
Вы ошиблись! 6 x 4 = 24
3 x 7 = 21
5 x 8 = 15
Вы ошиблись! 5 x 8 = 40
4 x 7 = 28
5 x 7 = 45
Вы ошиблись! 5 x 7 = 35
Правильных ответов: 6
Ваша оценка: 2
```
*/
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <windows.h>

int main()
{
    system("chcp 1251 > nul");

    // Текущее время для инициализации генератора случайных чисел
    const time_t current_time = time(NULL);
    srand((unsigned int)current_time);

    // Количество правильных ответов
    int count = 0;

    for (size_t i = 0; i < 10; ++i)
    {
        // число от 2 до 9
        int number1 = rand() % 7 + 2;
        int number2 = rand() % 7 + 2;
        int result = number1 * number2;
        int answer;
        std::cout << number1 << " x " << number2 << " = ";
        std::cin >> answer;
        if (answer == result)
        {
            ++count;
            continue;
        }
        std::cout << "Вы ошиблись!"
            << " " << number1 << " x " << number2 << " = " << result << std::endl;
    }

    // Итоговая оценка
    int rating;
    switch (count)
    {
    case 10: rating = 5; break;
    case 9:
    case 8: rating = 4; break;
    case 7: rating = 3; break;
    default: rating = 2; break;
    }

    std::cout << "Правильных ответов: " << count << "\n"
        << "Ваша оценка: " << rating << std::endl;
    return 0;
}

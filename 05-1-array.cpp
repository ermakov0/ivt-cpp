/**
 * Л/р 5 Одномерные массивы
 *
 * В одномерном массиве хранится информация о результатах соревнования
 * по плаванию (время заплыва спортсменов в секундах).
 * Необходимо найти среднее время заплыва.
 * Ввод значений массива производится с клавиатуры.
 *
 * ПРИМЕР:
```
Укажите количество спортсменов: 5
Введите время заплыва спортсменов (в секундах):
5
4.5
20.4
3
4
Среднее время заплыва=7.38 с.
```
*/
#include <iomanip>
#include <iostream>
#include <windows.h>

const size_t MAX_SIZE = 50;

int main()
{
    system("chcp 1251 > nul");
    std::cout << std::fixed << std::setprecision(2);

    // Статический массив для хранения времени заплыва спортсменов
    double array_s[MAX_SIZE];
    size_t count;
    std::cout << "Укажите количество спортсменов: ";
    std::cin >> count;
    if (count == 0 || count > MAX_SIZE)
    {
        std::cerr << "Ошибка: количество должно находиться в диапазоне [1; "
            << MAX_SIZE << "]" << std::endl;
        return 1;
    }

    std::cout << "Введите время заплыва спортсменов (в секундах):\n";
    for (size_t i = 0; i < count; ++i)
    {
        std::cin >> array_s[i];
        if (array_s[i] <= 0.0)
        {
            std::cerr << "Ошибка: время должно быть больше нуля" << std::endl;
            return 1;
        }
    }

    double average_s = 0.0;
    for (size_t i = 0; i < count; ++i)
    {
        average_s += array_s[i];
    }
    average_s /= count;

    std::cout << "Среднее время заплыва=" << average_s << " с." << std::endl;
    return 0;
}

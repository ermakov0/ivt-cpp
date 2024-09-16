/**
 * Л/р 6 Двумерные массивы
 *
 * В двумерном массиве хранится информация о баллах, полученных
 * спортсменами-пятиборцами в каждом из пяти видов спорта.
 * Необходимо найти минимальное суммарное количество баллов, набранных спортсменом.
 *
 * ПРИМЕР:
```
Укажите количество спортсменов: 3
Укажите баллы спортсменов-пятиборцев (5 в строке)
1 2 3 4 5
8 4 3 5 3
1 2 3 3 2
Исходные баллы спортсменов-пятиборцев:
1       2       3       4       5       | 15
8       4       3       5       3       | 23
1       2       3       3       2       | 11
Минимальное суммарное количество баллов=11
```
*/
#include <iostream>
#include <windows.h>

const size_t MAX_SIZE = 50;
const int MIN_BALL = 1;
const int MAX_BALL = 10;

int main()
{
    system("chcp 1251 > nul");

    const size_t COLS = 5;
    int array[MAX_SIZE][COLS];

    size_t count;
    std::cout << "Укажите количество спортсменов: ";
    std::cin >> count;
    if (count == 0 || count > MAX_SIZE)
    {
        std::cerr << "Ошибка: количество должно находиться в диапазоне [1; "
            << MAX_SIZE << "]" << std::endl;
        return 1;
    }

    std::cout << "Укажите баллы спортсменов-пятиборцев (" << COLS << " в строке)\n";
    for (size_t i = 0; i < count; ++i)
    {
        for (size_t j = 0; j < COLS; ++j)
        {
            std::cin >> array[i][j];
            if (array[i][j] < MIN_BALL || array[i][j] > MAX_BALL)
            {
                std::cerr << "Ошибка: балл должен быть в диапазоне ["
                    << MIN_BALL << "; " << MAX_BALL << "]" << std::endl;
                return 1;
            }
        }
    }

    int* sums = new int[count];
    for (size_t i = 0; i < count; ++i)
    {
        sums[i] = 0;
        for (size_t j = 0; j < COLS; ++j)
        {
            sums[i] += array[i][j];
        }
    }

    std::cout << "Исходные баллы спортсменов-пятиборцев:\n";
    for (size_t i = 0; i < count; ++i)
    {
        for (size_t j = 0; j < COLS; ++j)
        {
            std::cout << array[i][j] << '\t';
        }
        std::cout << "| " << sums[i] << '\n';
    }

    // поиск минимального суммарного количества баллов
    int min = sums[0];
    for (size_t i = 1; i < count; ++i)
    {
        if (sums[i] < min) {
            min = sums[i];
        }
    }
    delete[] sums;

    std::cout << "Минимальное суммарное количество баллов=" << min << std::endl;
    return 0;
}

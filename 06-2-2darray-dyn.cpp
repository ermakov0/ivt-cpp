/**
 * Л/р 6 Двумерные массивы
 *
 * В двумерном массиве хранится информация о баллах, полученных
 * спортсменами-пятиборцами в каждом из пяти видов спорта.
 * Необходимо упорядочить строки двумерного массива
 * по возрастанию общей суммы баллов, набранных каждым спортсменом.
 *
 * ПРИМЕР:
```
Укажите количество спортсменов: 6
Укажите баллы спортсменов-пятиборцев (5 в строке)
1 2 2 2 2
9 8 8 10 3
4 4 4 4 5
3 3 3 3 3
1 2 3 4 5
6 10 10 10 3
Исходные баллы спортсменов-пятиборцев:
1       2       2       2       2       | 9
9       8       8       10      3       | 38
4       4       4       4       5       | 21
3       3       3       3       3       | 15
1       2       3       4       5       | 15
6       10      10      10      3       | 39
Баллы спортсменов-пятиборцев, упорядоченные по cумме баллов:
6       10      10      10      3       | 39
9       8       8       10      3       | 38
4       4       4       4       5       | 21
1       2       3       4       5       | 15
3       3       3       3       3       | 15
1       2       2       2       2       | 9
```
*/
#include <iostream>
#include <windows.h>

const int MIN_BALL = 1;
const int MAX_BALL = 10;

int main()
{
    system("chcp 1251 > nul");

    size_t count;
    std::cout << "Укажите количество спортсменов: ";
    std::cin >> count;
    if (count == 0) {
        std::cerr << "Ошибка: количество должно быть больше нуля" << std::endl;
        return 1;
    }

    const size_t COLS = 5;
    // Указатель на массив указателей на строки матрицы
    int** array;
    // Выделение памяти под массив указателей на строки матрицы
    array = new int* [count];
    for (size_t i = 0; i < count; ++i)
    {
        // Выделение памяти под строки матрицы
        // последний элемент массива - сумма оценок
        array[i] = new int[COLS + 1];
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

    // считаем сумму баллов
    for (size_t i = 0; i < count; ++i)
    {
        array[i][COLS] = 0;
        for (size_t j = 0; j < COLS; ++j)
        {
            array[i][COLS] += array[i][j];
        }
    }

    std::cout << "Исходные баллы спортсменов-пятиборцев:\n";
    for (size_t i = 0; i < count; ++i)
    {
        for (size_t j = 0; j < COLS; ++j)
        {
            std::cout << array[i][j] << '\t';
        }
        // для хранения суммы памяти выделили на 1 столбец больше
        std::cout << "| " << array[i][COLS] << '\n';
    }

    // сортировка массива пузырьком по возрастанию и перестановка строк матрицы
    for (size_t i = 0; i < count; ++i)
    {
        for (size_t j = i + 1; j < count; ++j)
        {
            // сравниваем суммы баллов
            if (array[i][COLS] < array[j][COLS])
            {
                // и меняем строки местами через "пузырёк"
                for (size_t k = 0; k < COLS + 1; ++k)
                {
                    int tmp = array[i][k];
                    array[i][k] = array[j][k];
                    array[j][k] = tmp;
                }
            }
        }
    }

    std::cout << "Баллы спортсменов-пятиборцев, упорядоченные по cумме баллов:\n";
    for (size_t i = 0; i < count; ++i)
    {
        for (size_t j = 0; j < COLS; ++j)
        {
            std::cout << array[i][j] << '\t';
        }
        // для хранения суммы памяти выделили на 1 столбец больше
        std::cout << "| " << array[i][COLS] << '\n';
    }

    for (size_t i = 0; i < count; ++i)
    {
        delete[] array[i];
    }
    delete[] array;
    return 0;
}

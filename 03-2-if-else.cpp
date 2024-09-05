/**
 * Л/р 3 Ветвящийся вычислительный процесс
 *
 * Известно, что для каждого человека существует оптимальное значение веса,
 * которое можно вычислить по формуле: Рост (см) - 100.
 * Реальный вес может отличаться от оптимального: вес может быть
 * меньше оптимального, равняться ему или превышать оптимальное значение.
 * Программа запрашивает вес и рост, вычисляет оптимальное значение,
 * сравнивает его с реальным весом и выводит сообщение.
 *
 * ПРИМЕРЫ:
```
Укажите ваш вес (кг): 70.009
Укажите ваш рост (см): 170
Оптимальный вес = рост - 100 = 70.00 кг.
Вы в хорошей форме!
```
```
Укажите ваш вес (кг): 74
Укажите ваш рост (см): 170
Оптимальный вес = рост - 100 = 70.00 кг.
Надо похудеть на 4.00 кг.
```
```
Укажите ваш вес (кг): 65.1
Укажите ваш рост (см): 170
Оптимальный вес = рост - 100 = 70.00 кг.
Вам нужно поправиться на 4.90 кг.
```
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>

int main()
{
    system("chcp 1251 > nul");
    std::cout << std::fixed << std::setprecision(2);

    // Точность вычислений
    const double E = 0.01;

    double weight_kg, height_cm;

    std::cout << "Укажите ваш вес (кг): ";
    std::cin >> weight_kg;
    std::cout << "Укажите ваш рост (см): ";
    std::cin >> height_cm;

    // валидация пользовательского ввода
    if (weight_kg <= 0.0)
    {
        std::cerr << "Ошибка: вес должен быть больше нуля" << std::endl;
        return 1;
    }
    if (height_cm <= 0.0)
    {
        std::cerr << "Ошибка: рост должен быть больше нуля" << std::endl;
        return 1;
    }

    // Оптимальный вес
    double result_kg = height_cm - 100.0;
    std::cout << "Оптимальный вес = рост - 100 = " << result_kg << " кг." << std::endl;

    // if (weight == result) - вещественные типы нельзя сравнивать на строгое равенство/неравенство
    if (std::abs(weight_kg - result_kg) < E)
    {
        std::cout << "Вы в хорошей форме!" << std::endl;
    }
    else if (weight_kg > result_kg)
    {
        std::cout << "Надо похудеть на " << (weight_kg - result_kg) << " кг." << std::endl;
    }
    else
    {
        std::cout << "Вам нужно поправиться на " << (result_kg - weight_kg) << " кг." << std::endl;
    }
    return 0;
}

/**
 * Л/р 3 Ветвящийся вычислительный процесс
 *
 * Пересчёт веса из фунтов в килограммы.
 *
 * ПРИМЕР:
```
Укажите вес в фунтах: 42
0 - Россия
1 - Англия
2 - Австрия
3 - Германия
4 - Дания
5 - Исландия
6 - Италия
Выберите страну: 0
42.000 ф. - это 17.048 кг.
```
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>

int main()
{
    system("chcp 1251 > nul");
    std::cout << std::fixed << std::setprecision(3);

    double weight_funt;
    std::cout << "Укажите вес в фунтах: ";
    std::cin >> weight_funt;
    if (weight_funt <= 0.0)
    {
        std::cerr << "Ошибка: значение должно быть больше нуля" << std::endl;
        return 1;
    }

    int country;
    std::cout << "0 - Россия\n"
        << "1 - Англия\n"
        << "2 - Австрия\n"
        << "3 - Германия\n"
        << "4 - Дания\n"
        << "5 - Исландия\n"
        << "6 - Италия\n"
        << "Выберите страну: ";
    std::cin >> country;

    // Коэффициент перерасчета
    double k;
    switch (country)
    {
    case 0: k = 0.4059; break;
    case 1: k = 0.453592; break;
    case 2: k = 0.56001; break;
    case 3: k = 0.5; break;
    case 4: k = 0.5; break;
    case 5: k = 0.5; break;
    case 6: k = 0.31762; break;
    default:
        std::cerr << "Ошибка: неизвестная страна" << std::endl;
        return 1;
    }

    double weight_kg = k * weight_funt;
    std::cout << weight_funt << " ф. - это " << weight_kg << " кг." << std::endl;
    return 0;
}

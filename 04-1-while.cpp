/**
 * Л/р 4 Циклы
 *
 * Вычисление числа pi. В основе алгоритма вычисления лежит тот факт,
 * что сумма ряда 1 - 1/3 + 1/5 - 1/7 + 1/9 - ... приближается
 * к значению pi/4 при достаточно большом количестве членов ряда.
 *
 * ПРИМЕР:
```
pi=3.141591. Просуммировано 500002 членов ряда.
```
*/
#include <iomanip>
#include <iostream>
#include <windows.h>

// Точность вычислений
const double E = 1e-6;  // 0.000001;

int main()
{
    system("chcp 1251 > nul");
    std::cout << std::fixed << std::setprecision(6);

    double result = 0.0;
    double delta = 1.0;
    int i = 0;
    while (delta > E)
    {
        delta = 1.0 / (2 * i + 1);
        result += delta;
        delta = 1.0 / (2 * (i + 1) + 1);
        result -= delta;
        i += 2;
    }
    result *= 4;
    std::cout << "pi=" << result << ". Просуммировано " << i << " членов ряда." << std::endl;
    return 0;
}

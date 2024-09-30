/**
 * Л/р 3 Ветвящийся вычислительный процесс
 *
 * Мини-калькулятор, только деление
 *
 * ПРИМЕР:
```
Введите два числа: 2 0.0000000000004
Ошибка: Нельзя делить на ноль
```
*/
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <windows.h>

// Точность вычислений
const double E = 1e-6;  // 0.000001;

int main()
{
    system("chcp 1251 > nul");
    std::cout << std::fixed << std::setprecision(6);

    double number1, number2;
    std::cout << "Введите два числа: ";
    std::cin >> number1 >> number2;

    try
    {
        if (std::abs(number2) < E)
        {
            throw std::invalid_argument("Нельзя делить на ноль");
        }
        double result = number1 / number2;
        std::cout << number1 << " / " << number2 << " = " << result << std::endl;
    }
    catch (std::invalid_argument const& ex)
    {
        std::cerr << "Ошибка: " << ex.what() << std::endl;
        return 1;
    }
    return 0;
}

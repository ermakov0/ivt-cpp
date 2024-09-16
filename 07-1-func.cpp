/**
 * Л/р 7 Функции
 *
 * Написать функцию, которая определяет и возвращает сумму цифр натурального числа,
 * полученного в качестве аргумента.
 * Продемонстрировать ее работу для двух натуральных чисел.
 *
 * ПРИМЕР:
```
Укажите первое натуральное число: 123
Укажите второе натуральное число: 7654
Сумма цифр числа 123 = 6
Сумма цифр числа 7654 = 22
```
*/
#include <assert.h>
#include <iostream>
#include <windows.h>

/// <summary>
/// Посчитать сумму цифр числа
/// </summary>
/// <param name="number">Положительное число</param>
/// <returns>Сумма цифр числа</returns>
int sum(int number)
{
    assert(number >= 0);

    int result = 0;
    while (number > 0)
    {
        result += number % 10;
        number /= 10;
    }
    return result;
}

/// <summary>
/// Точка входа в программу
/// </summary>
int main()
{
    system("chcp 1251 > nul");

    int number1, number2;
    std::cout << "Укажите первое натуральное число: ";
    std::cin >> number1;
    std::cout << "Укажите второе натуральное число: ";
    std::cin >> number2;
    std::cout << "Сумма цифр числа " << number1 << " = " << sum(number1) << std::endl;
    std::cout << "Сумма цифр числа " << number2 << " = " << sum(number2) << std::endl;
    return 0;
}

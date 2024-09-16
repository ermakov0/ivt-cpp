/**
 * Л/р 7 Функции
 *
 * ПРИМЕР:
```
sum(10023) = 6
sum(10023, result2/*out/) = 6
sum(10023, &result3) = 6
```
*/
#include <assert.h>
#include <iostream>
#include <windows.h>
#include "07-2-func.h"

/// <summary>
/// Точка входа в программу
/// </summary>
int main()
{
    system("chcp 1251 > nul");

    const int number = 10023;

    // Возврат результата
    int result1 = sum(number);
    std::cout << "sum(" << number << ") = " << result1 << std::endl;

    // Возврат результата через аргумент-ссылку
    int result2;
    sum(number, result2/*out*/);
    std::cout << "sum(" << number << ", result2/*out*/) = " << result2 << std::endl;

    // Возврат результата через аргумент-указатель
    int result3;
    sum(number, &result3);
    std::cout << "sum(" << number << ", &result3) = " << result3 << std::endl;
    return 0;
}

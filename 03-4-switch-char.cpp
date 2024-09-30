/**
 * Л/р 3 Ветвящийся вычислительный процесс
 *
 * Мини-калькулятор
 *
 * ПРИМЕРЫ:
```
Введите строку в формате "(число) (оператор) (число)", где допустимый оператор [+-/*^]: 2.3 + 3
2.300 + 3.000 = 5.300
```
```
Введите строку в формате "(число) (оператор) (число)", где допустимый оператор [+-/*^]: 3 ^ 3
3.000 ^ 3.000 = 27.000
```
*/
#include <cmath>
#include <iomanip>
#include <iostream>
#include <windows.h>

int main()
{
    system("chcp 1251 > nul");
    std::cout << std::fixed << std::setprecision(3);

    double number1, number2;
    char op;
    std::cout << "Введите строку в формате \"(число) (оператор) (число)\""
        << ", где допустимый оператор [+-/*^]: ";
    std::cin >> number1 >> op >> number2;

    double result;
    switch (op)
    {
    case '+': result = number1 + number2; break;
    case '-': result = number1 - number2; break;
    case '*': result = number1 * number2; break;
    case '/': result = number1 / number2; break;
    case '^': result = pow(number1, number2); break;
    default:
        std::cerr << "Ошибка: неизвестный оператор \"" << op << "\"" << std::endl;
        return 1;
    }

    std::cout << number1 << ' ' << op << ' ' << number2 << " = " << result << std::endl;
    return 0;
}

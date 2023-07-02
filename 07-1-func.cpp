#include <iostream>
#include <clocale>

using namespace std;

/**
 * @brief Сумма цифр числа
 * @param number Положительное число
 * @return Сумма цифр числа
*/
int sum(int number) {
    int result = 0;
    while (number != 0) {
        result += number % 10;
        number /= 10;
    }
    return result;
}

/**
 * @brief Л/р 7 Функции
 *
 * Написать функцию, которая определяет и возвращает сумму цифр натурального числа,
 * полученного в качестве аргумента.
 * Продемонстрировать ее работу для двух натуральных чисел.
*/
int main() {
    setlocale(LC_ALL, "ru");

    int number1, number2;
    cout << "Укажите первое натуральное число: ";
    cin >> number1;
    cout << "Укажите второе натуральное число: ";
    cin >> number2;
    cout << "Сумма цифр числа " << number1 << " = " << sum(number1) << endl;
    cout << "Сумма цифр числа " << number2 << " = " << sum(number2) << endl;
}

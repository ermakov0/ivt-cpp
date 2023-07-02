#include <iostream>
#include <clocale>

using namespace std;

// Объявления функций

/**
 * @brief Сумма цифр числа
 * @param number Положительное число
 * @return Сумма цифр числа
*/
int sum(int number);

/**
 * @brief Сумма цифр числа
 * @param number Положительное число
 * @param result Возвращает сумму цифр числа по ссылке
*/
void sum(int number, int& result/*out*/);

/**
 * @brief Сумма цифр числа
 * @param number Положительное число
 * @param result Возвращает сумму цифр числа по указателю
*/
void sum(int number, int* result/*out*/);


/**
 * @brief Л/р 7 Функции
*/
int main() {
    setlocale(LC_ALL, "ru");

    const int number = 10023;

    // Возврат результата
    int result1 = sum(number);
    cout << "sum(" << number << ") = " << result1 << endl;

    // Возврат результата через аргумент-ссылку
    int result2;
    sum(number, result2/*out*/);
    cout << "sum(" << number << ", result2/*out*/) = " << result2 << endl;

    // Возврат результата через аргумент-указатель
    int result3;
    sum(number, &result3);
    cout << "sum(" << number << ", &result3) = " << result3 << endl;
}

// Определения функций

int sum(int number) {
    int result = 0;
    while (number != 0) {
        result += number % 10;
        number /= 10;
    }
    return result;
}

void sum(int number, int& result/*out*/) {
    /*
    result = 0;
    while (number != 0) {
        result += number % 10;
        number /= 10;
    }
    */
    // Вызов перегруженной функции, чтобы не дублировать код
    result = sum(number);
}

void sum(int number, int* result/*out*/) {
    /*
    *result = 0;
    while (number != 0) {
        *result += number % 10;
        number /= 10;
    }
    */
    // Вызов перегруженной функции, чтобы не дублировать код
    *result = sum(number);
}

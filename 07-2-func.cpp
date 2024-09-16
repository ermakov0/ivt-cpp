#include <assert.h>
#include "07-2-func.h"

// Определения функций

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

void sum(int number, int& result/*out*/)
{
    //assert(number >= 0);
    // Вызов перегруженной функции, чтобы не дублировать код
    result = sum(number);
}

void sum(int number, int* result/*out*/)
{
    //assert(number >= 0);
    // Вызов перегруженной функции, чтобы не дублировать код
    *result = sum(number);
}

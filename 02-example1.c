// Пользователь вводит x (вещественное).
// Вычислить по формуле y = 5x^5 + x^4 - 2x^3 + 43
// и вывести результат в консоль
#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y;

    printf("Введите x: ");
    scanf("%lf", &x);

    // y = 5x^5 + x^4 - 2x^3 + 43
    y = 5 * pow(x, 5) + pow(x, 4) - 2 * pow(x, 3) + 43;

    printf("y=%.6lf\n", y);
}

// $ ./02-example1.out 
// Введите x: 2
// y=203.000000

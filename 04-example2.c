// Пользователь вводит n.
// Вывести сумму n членов последовательности 1.2 - 1.4 + 1.6 - 1.8 ...
#include <stdio.h>

int main(void)
{
    size_t n;
    double res = 0.0, sign = 1.0, el = 1.2;

    printf("Введите n: ");
    scanf("%zu", &n);

    for (size_t i = 0; i < n; i++)
    {
        printf("%+.6lf\n", sign * el);
        res += sign * el;
        sign *= -1.0;
        el += 0.2;
    }

    printf("Сумма %zu членов последовательности = %.6lf\n", n, res);
}

// Пользователь вводит x;
// Вычислить значение y по кусочной формуле:
// y = 42,     x < 0
// y = 43 + x, 0 <= x <= 7
// y = 44 - x, x > 7
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Введите x: ");
    scanf("%d", &x);

    // (-inf; 0)
    if (x < 0)
    {
        y = 42;
    }
    // [0; 7]
    else if (x <= 7) // && x >= 0
    {
        y = 43 + x;
    }
    // (7; +inf)
    else // x >= 0 && x > 7
    {
        y = 44 - x;
    }

    printf("y=%d\n", y);
}

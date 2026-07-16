#include <stdio.h>

int main(void)
{
    int a, b, sum;

    printf("Введите число a: ");
    scanf("%d", &a);
    printf("Введите число b: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Сумма sum=%d\n", sum);
}

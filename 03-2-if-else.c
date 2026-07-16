#include <stdio.h>

int main(void)
{
    int a;

    printf("Введите число a: ");
    scanf("%d", &a);

    if (a % 10 == 3)
    {
        printf("Число заканчивается на 3\n");
    }
    else
    {
        printf("Число заканчивается на другую цифру\n");
    }
}

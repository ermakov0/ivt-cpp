// Пользователь вводит три целых числа.
// Вывести TRUE, если ровно два числа равны нулю, иначе FALSE.
#include <stdio.h>

int main(void)
{
    int a, b, c, count = 0;

    printf("Введите числа a, b, c (через пробел): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0)
    {
        count++;
    }
    if (b == 0)
    {
        count++;
    }
    if (c == 0)
    {
        count++;
    }

    if (count == 2)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
}

#include <stdio.h>

int main(void)
{
    int mark;

    printf("Введите оценку: ");
    scanf("%d", &mark);

    if (mark == 2)
    {
        printf("Двойка!\n");
    }
    else if (mark == 3)
    {
        printf("Тройка\n");
    }
    else if (mark == 4)
    {
        printf("Четвёрка\n");
    }
    else if (mark == 5)
    {
        printf("Пятёрка\n");
    }
    else
    {
        fprintf(stderr, "Ошибка ввода, ожидался 2-5\n");
        return 1;
    }
}

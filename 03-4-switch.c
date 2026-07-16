#include <stdio.h>

int main(void)
{
    int mark;

    printf("Введите оценку: ");
    scanf("%d", &mark);

    switch (mark)
    {
    case 2:
        printf("Двойка!\n");
        break;
    case 3:
        printf("Тройка\n");
        break;
    case 4:
        printf("Четвёрка\n");
        break;
    case 5:
        printf("Пятёрка\n");
        break;
    default:
        fprintf(stderr, "Ошибка ввода, ожидался 2-5\n");
        return 1;
    }
}

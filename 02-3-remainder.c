#include <stdio.h>

int main(void)
{
    int hours, res;

    printf("Введите количество часов: ");
    scanf("%d", &hours);

    res = hours % 12;

    printf("На стрелочных часах сейчас %d\n", res);
}

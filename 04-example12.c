#include <stdio.h>

int main(void)
{
    int tmp, sum = 0;

    printf("Введите последовательность чисел (признак окончания - 0): ");
    do
    {
        scanf("%d", &tmp);
        if (tmp % 2 != 0)
        {
            sum += tmp;
        }
    } while (tmp != 0);

    printf("Сумма нечётных чисел: %d\n", sum);
}

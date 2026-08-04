#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int sum = 0;

    printf("Введите последовательность чисел (признак окончания - 0): ");
    while (true)
    {
        int tmp;
        scanf("%d", &tmp);
        if (tmp == 0)
        {
            break;
        }
        if (tmp % 2 != 0)
        {
            sum += tmp;
        }
    }

    printf("Сумма нечётных чисел: %d\n", sum);
}

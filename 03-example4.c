// Пользователь вводит x;
// Вычислить значение y по кусочной формуле:
// y = 42, x = 0
// y = 43, x = 7
// y = 44, x = 8
// Использовать оператор switch.
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Введите x: ");
    scanf("%d", &x);

    switch (x)
    {
    case 0:
        y = 42;
        break;
    case 7:
        y = 43;
        break;
    case 8:
        y = 44;
        break;
    default:
        fprintf(stderr, "Ошибка ввода, ожидался x = 0, 7 или 8\n");
        return 1;
    }

    printf("y=%d\n", y);
}

// $ ./03-example4.out 
// Введите x: 7
// y=43

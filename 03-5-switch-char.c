#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, res;
    char op;

    printf("Введите число a: ");
    scanf("%f", &a);
    printf("Введите число b: ");
    scanf("%f", &b);
    printf("Введите оператор [+-/*^]: ");
    // пробел перед %c пропускает все пробельные символы, включая \n
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    case '^':
        res = powf(a, b);
        break;
    default:
        fprintf(stderr, "Ошибка: неизвестный оператор\n");
        return 1;
    }
    printf("%.3f %c %.3f = %.3f\n", a, op, b, res);
}

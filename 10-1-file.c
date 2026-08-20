#include <stdio.h>

int main(void)
{
    FILE *file;
    size_t n, i = 0;
    int res = -1;

    file = fopen("tests/10-input.txt", "r");
    if (file == NULL)
    {
        fprintf(stderr, "Ошибка открытия файла\n");
        return 1;
    }

    fscanf(file, "%zu", &n);

    while (i < n)
    {
        int tmp;
        fscanf(file, "%d", &tmp);
        if (res == -1 && tmp % 2 == 0)
        {
            res = tmp;
        }
        i++;
    }

    fclose(file);

    if (res != -1)
    {
        printf("Первое чётное число в последовательности: %d\n", res);
    }
    else
    {
        printf("В последовательности не было чётных чисел\n");
    }
}

#include <stdio.h>

int main(void)
{
    size_t i = 0;

    do
    {
        printf("%zu ^ 2 = %zu\n", i, i * i);
        i++;
    } while (i < 10);
}

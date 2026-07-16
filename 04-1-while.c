#include <stdio.h>

int main(void)
{
    size_t i = 0;

    while (i < 10)
    {
        printf("%zu ^ 2 = %zu\n", i, i * i);
        i++;
    }
}

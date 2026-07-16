#include <stdio.h>

int main(void)
{
    for (size_t i = 0; i < 10; i++)
    {
        printf("%zu ^ 2 = %zu\n", i, i * i);
    }
}

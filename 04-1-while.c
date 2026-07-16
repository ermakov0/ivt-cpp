#include <stdio.h>

int main(void)
{
    int i = 0;

    while (i < 10)
    {
        printf("%d ^ 2 = %d\n", i, i * i);
        i++;
    }
}

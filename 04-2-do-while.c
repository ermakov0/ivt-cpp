#include <stdio.h>

int main(void)
{
    int i = 0;

    do
    {
        printf("%d ^ 2 = %d\n", i, i * i);
        i++;
    } while (i < 10);
}

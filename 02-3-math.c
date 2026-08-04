#include <math.h>
#include <stdio.h>

#define PI 3.14f

int main(void)
{
    float r, s;

    printf("Введите радиус круга r (см): ");
    scanf("%f", &r);

    s = PI * powf(r, 2.0f);

    printf("Площадь S=%.2f см2\n", s);
}

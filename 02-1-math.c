#include <math.h>
#include <stdio.h>

#define PI 3.14159265358979323846

int main(void)
{
    double r, s;

    printf("Введите радиус круга r (см): ");
    scanf("%lf", &r);

    s = PI * pow(r, 2.0);

    printf("Площадь S=%.2lf см2\n", s);
}

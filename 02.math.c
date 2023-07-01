#include <stdio.h>
#include <locale.h>
// #define _USE_MATH_DEFINES
#include <math.h>

#define PI 3.14159265358979323846

/**
 * @brief Л/р 2 Линейный вычислительный процесс
 *
 * В треугольнике заданы две стороны а, b и угол напротив одной из них А.
 * Определить сторону с, углы B и С и площадь треугольника S
 * (линейные размеры вводить и выводить в см, площадь - в см2, углы - в градусах)
*/
int main() {
    setlocale(LC_ALL, "ru");

    double a, b, angle_a;
    printf("Введите стороны а и b (см): ");
    // scanf("%lf %lf", &a, &b);
    scanf_s("%lf %lf", &a, &b);
    printf("Введите угол А (град): ");
    scanf_s("%lf", &angle_a);

    // вычисление углов В и С
    double angle_a_rad = angle_a * PI / 180;              // перевод угла А в радианы
    double angle_b_rad = asin(b / a * sin(angle_a_rad));  // из теоремы синусов
    double angle_b = angle_b_rad * 180 / PI;              // перевод угла B в градусы
    double angle_c = 180 - (angle_a + angle_b);
    double angle_c_rad = angle_c * PI / 180;

    // вычисление стороны с и площади треугольника
    double c = a * sin(angle_c_rad) / sin(angle_a_rad);  // из теоремы синусов
    double s = 1.0 / 2 * a * b * sin(angle_c_rad);

    printf("Результаты:\n");
    printf("Сторона с=%.2lf см\n", c);
    printf("Углы В=%.2lf град, С=%.2lf град\n", angle_b, angle_c);
    printf("Площадь S=%.2lf см2\n", s);
}

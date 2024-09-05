/**
 * Л/р 2 Линейный вычислительный процесс
 *
 * В треугольнике заданы две стороны а, b и угол напротив одной из них А.
 * Определить сторону с, углы B и С и площадь треугольника S
 * (линейные размеры вводить и выводить в см, площадь в см2, углы в градусах)
 *
 * ПРИМЕР:
```
Введите стороны а и b (см): 3.0 4.5
Введите угол А (град): 21.9
Результаты:
Сторона с=6.66 см
Углы В=34.02 град, С=124.08 град
Площадь S=5.59 см2
```
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>

//using namespace std;

const double PI = 3.14159265358979323846;

int main()
{
    system("chcp 1251 > nul");

    double a_cm, b_cm, a_deg;
    std::cout << "Введите стороны а и b (см): ";
    std::cin >> a_cm >> b_cm;
    std::cout << "Введите угол А (град): ";
    std::cin >> a_deg;

    // перевод из градусов в радианы
    double a_rad = a_deg * PI / 180;
    double b_rad = asin(b_cm / a_cm * sin(a_rad));
    // перевод из радиан в градусы
    double b_deg = b_rad * 180 / PI;
    double c_deg = 180 - (a_deg + b_deg);
    // перевод из градусов в радианы
    double c_rad = c_deg * PI / 180;

    // вычисление стороны с и площади треугольника
    double c_cm = a_cm * sin(c_rad) / sin(a_rad);
    double s_cm2 = 1.0 / 2 * a_cm * b_cm * sin(c_rad);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Результаты:\n"
        << "Сторона с=" << c_cm << " см\n"
        << "Углы В=" << b_deg << " град, С=" << c_deg << " град\n"
        << "Площадь S=" << s_cm2 << " см2" << std::endl;

    return 0;
}

#include <iostream>
#include <iomanip>
#include <clocale>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846;

/**
 * @brief Л/р 2 Линейный вычислительный процесс
 *
 * В треугольнике заданы две стороны а, b и угол напротив одной из них А.
 * Определить сторону с, углы B и С и площадь треугольника S
 * (линейные размеры вводить и выводить в см, площадь в см2, углы в градусах)
*/
int main() {
    setlocale(LC_ALL, "ru");

    double a, b, angle_a;
    cout << "Введите стороны а и b (см): ";
    cin >> a >> b;
    cout << "Введите угол А (град): ";
    cin >> angle_a;

    double angle_a_rad = angle_a * PI / 180;
    double angle_b_rad = asin(b / a * sin(angle_a_rad)); 
    double angle_b = angle_b_rad * 180 / PI;
    double angle_c = 180 - (angle_a + angle_b);
    double angle_c_rad = angle_c * PI / 180;

    // вычисление стороны с и площади треугольника
    double c = a * sin(angle_c_rad) / sin(angle_a_rad);
    double s = 1.0 / 2 * a * b * sin(angle_c_rad);

    cout << fixed << setprecision(2);
    cout << "Результаты:\n"
        << "Сторона с=" << c << " см\n"
        << "Углы В=" << angle_b << " град, С=" << angle_c << " град\n"
        << "Площадь S=" << s << " см2" << endl;
}

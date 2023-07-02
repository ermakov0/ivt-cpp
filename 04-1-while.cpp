#include <iostream>
#include <iomanip>
#include <clocale>

using namespace std;

/**
 * @brief Л/р 4 Циклы
 *
 * Вычисление числа pi. В основе алгоритма вычисления лежит тот факт,
 * что сумма ряда 1 - 1/3 + 1/5 - 1/7 + 1/9 - ... приближается
 * к значению pi/4 при достаточно большом количестве членов ряда.
*/
int main() {
    setlocale(LC_ALL, "ru");

    /// Точность вычислений
    const double E = 0.000001;
    double result = 0.0;
    double delta = 1.0;
    int i = 0;
    while (delta > E) {
        delta = 1.0 / (2 * i + 1);
        result += delta;
        delta = 1.0 / (2 * (i + 1) + 1);
        result -= delta;
        i += 2;
    }
    result *= 4;
    cout << fixed << setprecision(6);
    cout << "pi=" << result << ". Просуммировано " << i << " членов ряда." << endl;
}

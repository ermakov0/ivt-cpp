#include <iostream>
#include <clocale>

using namespace std;

/**
 * @brief Л/р 3 ветвящийся вычислительный процесс
 *
 * Программа пересчитывает вес из фунтов в килограммы.
 *
 * @return 0 - всё ок, 1 - ошибка ввода
*/
int main() {
    setlocale(LC_ALL, "ru");

    double funt;
    cout << "Пересчет веса из фунтов в килограммы.\n"
        << "Укажите вес в фунтах: ";
    cin >> funt;
    if (funt <= 0.0) {
        cerr << "Ошибка: значение должно быть больше нуля" << endl;
        return 1;
    }

    int country;
    cout << "0 - Россия\n"
        << "1 - Англия\n"
        << "2 - Австрия\n"
        << "3 - Германия\n"
        << "4 - Дания\n"
        << "5 - Исландия\n"
        << "6 - Италия\n"
        << "Выберите страну: ";
    cin >> country;

    /// Коэффициент перерасчета
    double k;
    switch (country)
    {
    case 0: k = 0.4059; break;
    case 1: k = 0.453592; break;
    case 2: k = 0.56001; break;
    case 3: k = 0.5; break;
    case 4: k = 0.5; break;
    case 5: k = 0.5; break;
    case 6: k = 0.31762; break;
    default: {
        cerr << "Ошибка: неизвестная страна" << endl;
        return 1;
    }
    }  // end switch

    double result = k * funt;
    cout << funt << " ф. - это " << result << " кг." << endl;
}

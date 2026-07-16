#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

const double PI = 3.14159265358979323846;

int main()
{
    double r, s;

    cout << "Введите радиус круга r (см): ";
    cin >> r;

    s = PI * pow(r, 2.0);

    cout << fixed << setprecision(2);
    cout << "Площадь S=" << s << " см2" << endl;
}

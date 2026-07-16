#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

const float PI = 3.14f;

int main()
{
    float r, s;

    cout << "Введите радиус круга r (см): ";
    cin >> r;

    s = PI * pow(r, 2.0f);

    cout << fixed << setprecision(2);
    cout << "Площадь S=" << s << " см2" << endl;
}

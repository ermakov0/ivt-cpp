// Создать enum для типов геометрических фигур (круг, квадрат, прямоугольник)
// и вычислить площадь фигуры по заданным параметрам.
#include <iostream>
#include <cmath>

using namespace std;

enum FigType
{
    CIRCLE,
    SQUARE,
    RECTANGLE
};

double f(FigType fig, double arg1, double arg2 = 0.0);

int main()
{
    cout << "Площадь круга = " << f(CIRCLE, 2.5) << endl;
    cout << "Площадь квадрата = " << f(SQUARE, 4.0) << endl;
    cout << "Площадь прямоугольника = " << f(RECTANGLE, 2.0, 4.0) << endl;
}

double f(FigType fig, double arg1, double arg2)
{
    switch (fig)
    {
    case CIRCLE:
        // s = pi * r ^ 2
        return M_PI * arg1 * arg1;
    case SQUARE:
        // s = a ^ a
        return arg1 * arg1;
    case RECTANGLE:
        // s = a * b
        return arg1 * arg2;
    default:
        return 0.0;
    }
}

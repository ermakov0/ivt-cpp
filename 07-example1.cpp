// Написать функцию f(a,b), вычисляющую сумму квадратов
// Продемонстрировать её работу для трех пар чисел.
//
// Организовать возврат значений с использованием: оператора return.
#include <iostream>

using namespace std;

int f(int a, int b);

int main()
{
    for (size_t i = 0; i < 3; i++)
    {
        int n1, n2;

        cout << "Введите число a: ";
        cin >> n1;
        cout << "Введите число b: ";
        cin >> n2;

        cout << "f(" << n1 << ", " << n2 << ") = " << f(n1, n2) << endl;
    }
}

int f(int a, int b)
{
    return a * a + b * b;
}

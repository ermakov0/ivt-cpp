#include <assert.h>
#include <iostream>

using namespace std;

int sum(int n);

int main()
{
    int n1, n2;

    cout << "Введите первое натуральное число: ";
    cin >> n1;
    cout << "Введите второе натуральное число: ";
    cin >> n2;

    cout << "Сумма цифр числа " << n1 << " = " << sum(n1) << endl;
    cout << "Сумма цифр числа " << n2 << " = " << sum(n2) << endl;
}

int sum(int n)
{
    assert(n >= 0);

    int res = 0;
    while (n > 0)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

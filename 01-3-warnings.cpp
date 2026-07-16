#include <iostream>

using namespace std;

int main()
{
    // ошибка: expected «;» before «int»
    cout << "Hello World!" << endl
    // предупреждение: неиспользуемая переменная var [-Wunused-variable]
    int var;
    return 0;
}

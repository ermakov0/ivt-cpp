/**
 * Л/р 1 Знакомство со средой разработки
*/
#include <iostream>

using namespace std;

int main() {
    // Ошибка	C2144	синтаксическая ошибка : перед "int" требуется ";"
    cout << "Hello World!" << endl
    // Предупреждение	C4189   var : локальная переменная инициализирована, но не использована
    int var = 42;
    // Предупреждение	C4101	unusing : неиспользованная локальная переменная
    int unusing;
	return 0;
}

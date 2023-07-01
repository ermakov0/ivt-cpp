#include <iostream>
#include <clocale>

using namespace std;

/**
 * @brief Л/р 1 Знакомство со средой разработки
 * Исходный код на C++
 * @return Всегда 0
*/
int main() {
    setlocale(LC_ALL, "ru");

    // Ошибка	C2144	синтаксическая ошибка : перед "int" требуется ";"
    cout << "Hello World! Привет мир!" << endl
    // Предупреждение	C4189   var : локальная переменная инициализирована, но не использована
    int var = 42;
    // Предупреждение	C4101	unusing : неиспользованная локальная переменная
    int unusing;
}

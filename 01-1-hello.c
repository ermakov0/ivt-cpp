#include <stdio.h>
#include <locale.h>

/**
 * @brief Л/р 1 Знакомство со средой разработки
 * Исходный код на C
 * @return Всегда 0
*/
int main() {
    setlocale(LC_ALL, "ru");

    // Ошибка(активно)	E0065	требуется точка с запятой ";"
    printf("Hello World! Привет мир!\n")
    // Предупреждение	C4189	var : локальная переменная инициализирована, но не использована
    int var = 42;
    // Предупреждение	C4101	unusing : неиспользованная локальная переменная
    int unusing;
}

/**
 * Л/р 8 Символы и строки
 *
 * Дана строка, вывести длину каждого слова
 *
 * ПРИМЕР:
```
Введите строку:
   Привет, мир  рр
Слово: "Привет"; длина: 6
Слово: "мир"; длина: 3
Слово: "рр"; длина: 2
```
*/
//extern "C" {
#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>

/// <summary>
/// Обрезать пробельные символы у строки inplace слева
/// </summary>
/// <param name="str">Строка</param>
void ltrim(char* str)
{
    assert(str != NULL);
    // двигаем указатель, пока строка не будет начинаться
    // с непробельного символа
    while (isspace(*str))
    {
        ++str;
    }
}

/// <summary>
/// Обрезать пробельные символы у строки inplace справа
/// </summary>
/// <param name="str">Строка</param>
void rtrim(char* str)
{
    assert(str != NULL);
    char* last = str + strlen(str) - 1;
    //char ch = *last;
    while (isspace(*last))
    {
        --last;
        //ch = *last;
    }
    *(last + 1) = '\0';
}

/// Обрезать пробельные символы у строки inplace
/// </summary>
/// <param name="str">Строка</param>
void trim(char* str)
{
    //assert(str != NULL);
    ltrim(str);
    rtrim(str);
}

/// <summary>
/// Точка входа в программу
/// </summary>
int main(void)
{
    system("chcp 1251 > nul");
    setlocale(LC_ALL, "ru");

#define MAX_SIZE 100
#define DELIMITER " .,!?"

    char str[MAX_SIZE];
    puts("Введите строку:");
    fgets(str, MAX_SIZE, stdin);
    trim(str);
    char* ptr = strtok(str, DELIMITER);
    while (ptr)
    {
        printf("Слово: \"%s\"; длина: %zu\n", ptr, strlen(ptr));
        ptr = strtok(NULL, DELIMITER);
    }
    return 0;
}
//}


// Дана Си-строка (ввод с консоли).
// Подсчитать количество чётных цифр в строке.
#include <iostream>
// #include <cstring>

using namespace std;

int main()
{
    const size_t MAX_SIZE = 256;
    char str[MAX_SIZE];
    size_t count = 0;

    cout << "Введите строку: ";
    cin.getline(str, MAX_SIZE);

    // for (size_t i = 0; i < strlen(str); i++)
    for (char *p = str; *p != '\0'; p++)
    {
        if (*p == '0' || *p == '2' || *p == '4' || *p == '6' || *p == '8')
        {
            count++;
        }
    }

    cout << "Количество чётных цифр в строке = " << count << endl;
}

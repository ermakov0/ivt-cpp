/**
 * Л/р 8 Символы и строки
 *
 * ПРИМЕР:
```
Сколько тебе лет? 18
Как тебя зовут? Иван
Привет, Иван! тебе 18 лет.
Привет, Иван! тебе 18 лет.
```
*/

#include <iostream>
#include <sstream>
#include <string>
#include <windows.h>

int main()
{
    system("chcp 1251 > nul");

    int age;
    std::string name;

    std::cout << "Сколько тебе лет? ";
    std::cin >> age;
    std::cin.ignore();  // (!)

    std::cout << "Как тебя зовут? ";
    std::getline(std::cin, name);

    std::ostringstream os;
    os << "Привет, " << name << "! тебе " << age << " лет.";
    std::string result = os.str();
    std::cout << result << std::endl;

    // внезапная c-string
    const char* result2 = result.c_str();
    std::cout << result << std::endl;
    return 0;
}

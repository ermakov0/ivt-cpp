/**
 * �/� 8 ������� � ������
 *
 * ������:
```
������� ���� ���? 18
��� ���� �����? ����
������, ����! ���� 18 ���.
������, ����! ���� 18 ���.
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

    std::cout << "������� ���� ���? ";
    std::cin >> age;
    std::cin.ignore();  // (!)

    std::cout << "��� ���� �����? ";
    std::getline(std::cin, name);

    std::ostringstream os;
    os << "������, " << name << "! ���� " << age << " ���.";
    std::string result = os.str();
    std::cout << result << std::endl;

    // ��������� c-string
    const char* result2 = result.c_str();
    std::cout << result << std::endl;
    return 0;
}

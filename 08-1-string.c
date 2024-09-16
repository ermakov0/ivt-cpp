/**
 * �/� 8 ������� � ������
 *
 * ���� ������, ������� ����� ������� �����
 *
 * ������:
```
������� ������:
   ������, ���  ��
�����: "������"; �����: 6
�����: "���"; �����: 3
�����: "��"; �����: 2
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
/// �������� ���������� ������� � ������ inplace �����
/// </summary>
/// <param name="str">������</param>
void ltrim(char* str)
{
    assert(str != NULL);
    // ������� ���������, ���� ������ �� ����� ����������
    // � ������������� �������
    while (isspace(*str))
    {
        ++str;
    }
}

/// <summary>
/// �������� ���������� ������� � ������ inplace ������
/// </summary>
/// <param name="str">������</param>
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

/// �������� ���������� ������� � ������ inplace
/// </summary>
/// <param name="str">������</param>
void trim(char* str)
{
    //assert(str != NULL);
    ltrim(str);
    rtrim(str);
}

/// <summary>
/// ����� ����� � ���������
/// </summary>
int main(void)
{
    system("chcp 1251 > nul");
    setlocale(LC_ALL, "ru");

#define MAX_SIZE 100
#define DELIMITER " .,!?"

    char str[MAX_SIZE];
    puts("������� ������:");
    fgets(str, MAX_SIZE, stdin);
    trim(str);
    char* ptr = strtok(str, DELIMITER);
    while (ptr)
    {
        printf("�����: \"%s\"; �����: %zu\n", ptr, strlen(ptr));
        ptr = strtok(NULL, DELIMITER);
    }
    return 0;
}
//}


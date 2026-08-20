#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const size_t MAX_SIZE = 256;
    char str[MAX_SIZE];

    cout << "Введите строку: ";
    cin.getline(str, MAX_SIZE);

    size_t len = strlen(str);
    str[len / 2] = '\0';

    cout << "Половина строки: " << str << endl;
}

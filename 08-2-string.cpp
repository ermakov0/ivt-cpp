#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cout << "Введите строку: ";
    getline(cin, str);

    if (str.find('.') != string::npos)
    {
        cout << "В строке содержится точка" << endl;
    }

    const char *cstr = str.c_str();
    cout << "c-string: " << cstr << endl;
}

// Дана строка с путём "/home/user/cpp.tar.xz" (Unix).
// Вывести расширение файла (tar.xz)
#include <iostream>
#include <string>

using namespace std;

int main()
{
    const char *path = "/home/user/cpp.tar.xz";
    // const char *path = "C:\\Program Files\\App\\app.exe";

    string str = path;
    size_t pos;

    pos = str.rfind('/');
    if (pos == string::npos)
    {
        return 1;
    }
    // cpp.tar.xz
    str = str.substr(pos + 1);
    if (str.length() == 0)
    {
        return 1;
    }

    pos = str.find('.');
    if (pos == string::npos)
    {
        return 1;
    }
    // tar.xz
    str = str.substr(pos + 1);

    cout << "Расширение файла: " << str << endl;
}

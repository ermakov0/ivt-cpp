#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    size_t n, i = 0;
    int res = -1;

    ifstream file("tests/10-input.txt");
    if (!file.is_open())
    {
        cerr << "Ошибка открытия файла" << std::endl;
        return 1;
    }

    file >> n;

    while (i < n)
    {
        int tmp;
        file >> tmp;
        if (res == -1 && tmp % 2 == 0)
        {
            res = tmp;
        }
        i++;
    }

    file.close();

    if (res != -1)
    {
        printf("Первое чётное число в последовательности: %d\n", res);
    }
    else
    {
        printf("В последовательности не было чётных чисел\n");
    }
}

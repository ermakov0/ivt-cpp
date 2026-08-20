#include <iostream>
#include <string>

using namespace std;

enum Color
{
    RED = 42,
    GREEN = 43,
    BLUE = 44
};
// enum class Color
// scoped enums only available with «-std=c++11»

string color_to_str(Color color);

int main()
{
    // Color color = RED;
    Color color = (Color)42;
    cout << color_to_str(color) << endl;
}

string color_to_str(Color color)
{
    switch (color)
    {
    case RED:
        return "красный";
    case GREEN:
        return "зелёный";
    case BLUE:
        return "синий";
    default:
        return "неизвестный";
    }
}

// Объект - студент. Для каждого студента известны имя, возраст и комплексный рейтинг.
// Определить, сколько студентов имеют комплексный рейтинг больше 70
#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int age;
    int rating;
};

void student_read(Student &student);

int main()
{
    size_t n;
    cout << "Введите количество студентов: ";
    cin >> n;

    Student *students = new Student[n];
    for (size_t i = 0; i < n; i++)
    {
        student_read(students[i]);
    }

    size_t count = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (students[i].rating > 70)
        {
            count++;
        }
    }

    cout << "Количество студентов, которые имеют комплексный рейтинг больше 70 = " << count << endl;

    delete[] students;
}

void student_read(Student &student)
{
    cout << "Введите имя: ";
    cin >> student.name;
    cout << "Введите возраст (целое число лет): ";
    cin >> student.age;
    cout << "Введите комплексный рейтинг (0-100): ";
    cin >> student.rating;
    cin.ignore();
}

// $ ./09-example2.out 
// Введите количество студентов: 3
// Введите имя: Иван
// Введите возраст (целое число лет): 17
// Введите комплексный рейтинг (0-100): 85
// Введите имя: Александра
// Введите возраст (целое число лет): 18
// Введите комплексный рейтинг (0-100): 95
// Введите имя: Артём
// Введите возраст (целое число лет): 18
// Введите комплексный рейтинг (0-100): 65
// Количество студентов, которые имеют комплексный рейтинг больше 70 = 2

#include <iostream>
#include <string>

using namespace std;

enum Gender
{
    MALE,
    FEMALE
};

struct Student
{
    string name;
    Gender gender;
};

void student_print(const Student &student);

int main()
{
    // Student student{.name = "Александр", .gender = MALE};
    Student student;
    student.name = "Александра";
    student.gender = FEMALE;
    student_print(student);
}

void student_print(const Student &student)
{
    cout << "Имя: " << student.name << endl;
    cout << "Пол: " << (student.gender == MALE ? "мужской" : "женский") << endl;
}

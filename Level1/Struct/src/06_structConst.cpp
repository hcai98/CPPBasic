#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    int grade;
};

void printStudent(const Student *s)
{

    cout << "Name: " << s->name << endl;
    cout << "Age: " << s->age << endl;

    // s->age = 12;
}

int main()
{

    struct Student s = {"John", 18, 70};

    printStudent(&s);

    cout << s.age << endl;

    return 0;
}
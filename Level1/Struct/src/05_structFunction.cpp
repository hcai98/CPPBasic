#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    int score;
};

// pass by value
void printStudent1(struct Student s)
{

    cout << s.name << endl;
    cout << s.age << endl;
    cout << s.score << endl;
    s.name = "New Name";
}

// pass by reference
void printStudent2(struct Student *s)
{

    cout << s->name << endl;
    cout << s->age << endl;
    cout << s->score << endl;

    s->name = "New Name";
}

int main()
{

    Student s = {"John", 18, 100};

    printStudent1(s);
    cout << s.name << endl;

    printStudent2(&s);
    cout << s.name << endl;
}
#include <iostream>
using namespace std;

struct Student
{

    // memeber
    string name;
    int age;
    double grade;
}s3;

int main()
{

    // 1. struct Student s1;
    struct Student s1;
    s1.name = "John";
    s1.age = 20;
    s1.grade = 199;

    cout << "Name: " << s1.name << " Age: " << s1.age << " Grade: " << s1.grade << endl;
    ;

    // 2. struct Student s2 = { ... }
    struct Student s2 = {
        "Kevin", 30, 233};
    cout << "Name: " << s2.name << " Age: " << s2.age << " Grade: " << s2.grade << endl;
    ;

    // 3. create during definition
    s3.name = "Logan";
    s3.age = 10;
    s3.grade = 99;
    cout << "Name: " << s3.name << " Age: " << s3.age << " Grade: " << s3.grade << endl;

    return 0;
}
#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    int grade;
};

int main()
{

    // definition
    struct Student s = {"John", 12, 99};

    // point to student struct;
    Student *pS = &s;

    // access student through pointer
    cout << "Name: " << pS->name
         << " Age: " << pS->age
         << " Grade: " << pS->grade
         << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int age = 19;
    double gpa = 2.7;
    string name = "Mike";

    // print out pointers
    cout << "Address of gpa: " << &gpa << endl;
    cout << "Address of age: " << &age << endl;
    cout << "Address of name: " << &name << endl;

    // create variables to keep track of the pointers
    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    // print out pointers
    cout << "Address of gpa: " << pGpa << endl;
    cout << "Address of age: " << pAge << endl;
    cout << "Address of name: " << pName << endl;

    // dereferencing pointers
    cout << "Value at pAge: " << *pAge << endl;

    return 0;
}
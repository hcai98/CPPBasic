#include <iostream>
using namespace std;

// static member function
// 1. all member shares the same functioun
// 2. static member function can only access static member variable

class Person
{
public:
    // static member function
    static void func()
    {
        A = 200; // static member can access static member variable
        // B = 200; // Cant' do this, because B is non-static
        cout << "static void func" << endl;
    }

    static int A; // static
    int B;        // non-static
};

int Person::A = 100;

void test1()
{

    // 1. access through object
    Person p;
    p.func();

    // 2. access through class
    Person::func();
}

int main()
{

    test1();

    return 0;
}
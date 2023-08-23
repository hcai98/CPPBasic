#include <iostream>
using namespace std;

class Person
{

public:
    // 1. all object share the same data
    // 2. assign memory when compiling
    // 3. declare in class, initialize outside of class
    static int m_A;


    // static member variable also has permission
private:
    static int m_B;
};

void test1()
{
    Person p1;
    cout << p1.m_A << endl;

    Person p2;
    p2.m_A = 200; // this will change m_A in p1 too.

    cout << p1.m_A << endl;
}

void test2()
{
    // static member variable does not belong to any object, every object shares it
    // Therefore, there are 2 ways of accessing static member variable:

    // 1. Access through object
    Person p;
    cout << p.m_A << endl;

    // 2. Access through class name
    cout << Person::m_A << endl;

    
    
}

// initialize
int Person::m_A = 100;
int Person::m_B = 500;

int main()
{

    // test1();
    test2();

    return 0;
}
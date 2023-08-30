#include <iostream>
using namespace std;

// Parent Class
class Base
{
public:
    static int m_A;

    static void func()
    {
        cout << "static void func (Base)" << endl;
    }
};

int Base::m_A = 100;

// Child Class
class Child : public Base
{
public:
    static int m_A;
    static void func()
    {
        cout << "static void func (Child)" << endl;
    }
};
int Child::m_A = 200;

// Test 1
void test()
{
    // 1. Access through object
    Child c;
    cout << "m_A (child) = " << c.m_A << endl;
    cout << "m_A (parent) = " << c.Base::m_A << endl;

    // 2. Access through class
    cout << "m_A (class, child) = " << Child::m_A << endl;
    cout << "m_A (class, parent) = " << Child::Base::m_A << endl;
}

// Test 2
void test2()
{
    // 1. Access through object
    Child c;
    c.func();
    c.Base::func();

    // 2. Access through class
    Child::func();
    Child::Base::func();
}

int main()
{
    test();
    test2();
    return 0;
}
#include <iostream>
using namespace std;

class Base
{
public:
    Base(){
        m_A = 100;
    }
    int m_A;

    void func()
    {
        cout << "Base - func()" << endl;
    }

};

class Child : public Base
{
public:
    Child()
    {
        m_A = 200;
    }
    void func()
    {
        cout << "Child - func()" << endl;
    }
    void func(int a)
    {
        cout << "Child - func(int a)" << endl;
    }
    int m_A; // Child also has an m_A
};

// Member variable with the same name
void test()
{
    Child c;
    cout << "m_A in child: " << c.m_A << endl;

    cout << "m_A in parent: " << c.Base::m_A << endl;
}

// Member function with the same name
void test2()
{
    Child c;
    c.func();
    c.Base::func(); 

    c.func(10); 
    
}

int main()
{
    test();
    test2();

    return 0; 
}
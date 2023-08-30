#include <iostream>
using namespace std;

// 3 types of inheritance
// 1. Public
// 2. Protected
// 3. Private

class Base
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

// Public Inheritance
class Child1 : public Base
{
public:
    void func()
    {
        m_A = 10; // public members are still public
        m_B = 10; // protected members are still protected
        // m_C = 10; // private members cannot be accessed
    }
};

// Protected Inheritance
class Child2 : protected Base
{
public:
    void func()
    {
        m_A = 10; // public members become protected
        m_B = 10; // protected members are still protected
        // m_C = 10; // private members cannot be accessed
    }
};

// Private Inheritance
class Child3 : private Base
{
public:
    void func()
    {
        m_A = 10; // public members become private
        m_B = 10; // protected members also become private
        // m_C = 10; // private members cannot be accessed
    }
};

class Grandchild3 : public Child3
{
public:
    void func()
    {
        // m_A = 100; // cannot access because m_A has become private 
        // m_B = 100; // cannot access because m_B has become private 
    }
};

void test()
{
    Child1 c1;
    c1.m_A = 100;
    // c1.m_B = 100; // still procted in child, so cannot access

    Child2 c2;
    // c2.m_A; // public member in parent class becomes protected, so cannot access


}

int main()
{
    test();
    return 0;
}
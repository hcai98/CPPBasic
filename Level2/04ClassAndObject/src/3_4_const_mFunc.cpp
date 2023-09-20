#include <iostream>
using namespace std;

// constant function
// cannot change value of member variable

class Person
{
public:
    Person()
    {
        m_A = 0;
        m_B = 0;
    }
    // this => it's  a constant pointer
    // Person* const this;
    void showPerson() const // the const here change "this" to a pointer to constant
    {
        // this->m_A = 100;
        // this = NULL; // this pointer cannot change where it point to
        this->m_B = 100;
    }

    void func() {};

    int m_A;
    mutable int m_B; // make n_B modifiable in constant member function
};

void test1()
{
    Person p;
    p.showPerson();
}

void test2()
{
    const Person p; // this make p a constant object
    // p.m_A = 100; // can not do this because p is constant
    p.m_B = 100; // can do this because m_B is mutatble

    // Constant object can only call constant functions
    p.showPerson(); // yes, because showPerson is constant function
    // p.func(); // no, because func is not constant member function
}

int main()
{

    return 0;
}
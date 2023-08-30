#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        m_Age = 40;
    }
    int m_Age;
};

class Mother : virtual public Person
{
};
class Father : virtual public Person
{
};
class Child : public Mother, public Father
{
};

// Test 1
void test()
{
    Child c;
    cout << c.m_Age << endl;         // this will work because of virtual inheritance
    cout << c.Mother::m_Age << endl; // this will work because of virtual inheritance
    cout << c.Father::m_Age << endl; // this will work because of virtual inheritance

    c.Mother::m_Age = 100;
    cout << c.m_Age << endl;         // this will work because of virtual inheritance
    cout << c.Mother::m_Age << endl; // this will work because of virtual inheritance
    cout << c.Father::m_Age << endl; // this will work because of virtual inheritance

    cout << "Size of Father: " << sizeof(Father) << endl;
    cout << "Size of Mother: " << sizeof(Mother) << endl;
    cout << "Size of Child: " << sizeof(Child) << endl;
}

int main()
{
    test();
    return 0;
}
#include <iostream>
using namespace std;

// leftshift operator overload
class Person
{
    friend ostream &operator<<(ostream &cout, Person &p);

public:
    Person();

private:
    int m_A;
    int m_B;
};

Person::Person()
{
    m_A = 10;
    m_B = 20;
}

// can only use global function to overload leftshift operator
ostream &operator<<(ostream &cout, Person &p)
{
    cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
    return cout;
}

void test()
{
    Person p;
    
    cout << p << endl;
}

int main()
{

    test();

    return 0;
}
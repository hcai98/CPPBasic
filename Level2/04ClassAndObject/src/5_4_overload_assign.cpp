#include <iostream>
using namespace std;

// Assignment Operator Overload

class Person
{
public:
    Person(int age)
    {
        m_Age = new int(age);
    }
    ~Person()
    {
        if (m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
        cout << "Destructor" << endl;
    }

    // overload assignment operator
    Person& operator=(Person &person)
    {
        // 1. check if there's anything in heap
        if (m_Age != NULL)
        {
            cout << "Releasing heap" << endl;
            delete m_Age;
            m_Age = NULL;
        }

        // 2. Deep copy values in person to this
        m_Age = new int(*person.m_Age);

        return *this;
    }

    int *m_Age;
};

void test()
{
    Person p1(18);
    cout << "P1's Address: " << &p1 << endl;
    cout << "P1's age: " << *p1.m_Age << endl;
    cout << "P1's age: " << p1.m_Age << endl << endl;

    Person p2(20);
    cout << "P2's Address: " << &p2 << endl;
    cout << "P2's age: " << *p2.m_Age << endl;
    cout << "P2's age: " << p2.m_Age << endl << endl;

    p2 = p1; // shallow copy
    cout << "P2's Address: " << &p2 << endl;
    cout << "P2's age: " << *p2.m_Age << endl;
    cout << "P2's age: " << p2.m_Age << endl << endl;

    Person p3(30);
    p3 = p2 = p1;
    cout << "P1's age: " << *p1.m_Age << endl;
    cout << "P2's age: " << *p2.m_Age << endl;
    cout << "P3's age: " << *p3.m_Age << endl << endl;

}

int main()
{
    test();

    // int a = 10;
    // int b = 20;
    // int c = 30;
    // c = b = a;

    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // cout << "c = " << c << endl;


    return 0;
}
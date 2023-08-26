#include <iostream>
using namespace std;

// overload relational operator

class Person
{
public:
    Person(string name, int age)
    {
        m_Age = age;
        m_Name = name;
    }

    // overload ==
    bool operator==(Person &p)
    {
        if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
        {
            return true;
        }
        return false;
    }

    // overload !=
    bool operator!=(Person &p)
    {
        if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
        {
            return false;
        }
        return true;
    }

    string m_Name;
    int m_Age;
};

void test()
{
    Person p1("Tom", 18);
    Person p2("Tom", 18);

    // == 
    if (p1 == p2)
    {
        cout << "P1 is equal to P2" << endl;
    }
    else
    {
        cout << "P1 is NOT equal to P2" << endl;
    }

    // !=
    if (p1 != p2)
    {
        cout << "P1 is NOT equal to P2" << endl;
    }
    else
    {
        cout << "P1 is equal to P2" << endl;
    }
    
}

int main()
{
    test();

    return 0;
}
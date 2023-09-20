#include <iostream>
using namespace std;

class Person
{

public:
    void showClassName()
    {
        cout << "This is Person Class" << endl;
    }

    void showPersonAge()
    {
        cout << "Age = " << m_Age << endl;
    }

    void showPersonAge2()
    {
        if (this == NULL)
        {
            cout << "This pointer is null." << endl;
            return;
        }
        cout << "Age = " << m_Age << endl;
    }

    int m_Age;
};

void test1()
{
    Person *p = NULL;

    p->showClassName();
    // p->showPersonAge(); // Can't do this
    p->showPersonAge2();
}

int main()
{
    test1();

    return 0;
}
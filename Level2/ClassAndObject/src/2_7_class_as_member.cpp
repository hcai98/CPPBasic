#include <iostream>

using namespace std;

class Phone
{
public:
    Phone(string pName)
    {
        this->pName = pName;
        cout << "Phone Constructor" << endl;
    }
    ~Phone()
    {
        cout << "Phone Destructor" << endl;
    }

    string pName;
};

class Person
{
public:
    Person(string name, string pName) : m_name(name), m_phone(pName) // m_phone = pName
    {
        cout << "Person Constructor" << endl;
    }
    ~Person()
    {
        cout << "Person Destructor" << endl;
    }

    // member variables
    string m_name;
    Phone m_phone;
};

void test1()
{
    Person p("Adam", "iPhone 14 Pro");
    cout << "Person: " << p.m_name << " - Phone: " << p.m_phone.pName << endl;
}

int main()
{
    test1();

    return 0;
}
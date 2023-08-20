#include<iostream>
using namespace std;

// public     : can be access from inside/outisde of class
// private    : can be access from only inside of class
// proteceted : can be access from only inside of class / by children

class Person
{

public:
    string m_name;

protected:
    string m_car;

private:
    int m_password;

public:
    void func()
    {
        m_name = "John";
        m_car = "c300";
        m_password = 1234;
    }

};


int main()
{

    Person p1;

    p1.m_name = "Ryan";
    // p1.m_car = "car2"
    // p1.m_password = 4567;

    return 0;
}

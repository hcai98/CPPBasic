#include <iostream>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        this->age = age;
    }

    Person(const Person & p)
    {
        age = p.age;
        cout << "Copy Constructor" << endl;
        cout << "Address of this: " << (long) this << endl;
        cout << "Address of copied object: " << (long) &p << endl;
    }


    Person& addAge(Person &p)
    {
        this->age += p.age;
        return *this;
    }

    int age;
};

void test()
{
    Person p1(18); 
    Person p2(20);

    cout << "p1's age: " << p1.age << endl;
    cout << "p2's age: " << p2.age << endl;

    cout << "p1's address: " << (long)&p1 << endl;
    cout << "p2's address: " << (long)&p2 << endl;

    p2.addAge(p1).addAge(p1).addAge(p1);

    cout << "p1's age: " << p1.age << endl;
    cout << "p2's age: " << p2.age << endl;
    cout << "p1's address: " << (long)&p1 << endl;
    cout << "p2's address: " << (long)&p2 << endl;
}

int main()
{
    test();
    return 0;
}
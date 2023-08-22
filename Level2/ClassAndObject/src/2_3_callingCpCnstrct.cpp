#include <iostream>
using namespace std;

/*
When is copy constructor used:
1. using an existing object to create new object
2. pass parameters by value
3. return local object by value
*/

class Person
{

public:
    Person()
    {
        cout << "Person's Default Constructor" << endl;
    }
    Person(int age)
    {
        this->age = age;
        cout << "Person's Parameterized Constructor" << endl;
    }
    Person(const Person &p)
    {
        age = p.age;
        cout << "Person's Copy Constructor" << endl;
    }
    ~Person()
    {
        cout << "Person's Deconstructor" << endl;
    }

    int age;
};

// 1. use existing object to create new object
void test1()
{
    Person p1(20);
    Person p2(p1);

    cout << "P2'age: " << p2.age << endl;
}

// 2. pass parameters by value
void doWork(Person p)
{
    cout << "do some work..." << endl;
}
void test2()
{
    Person p;
    doWork(p);
}


// 3. return local object by value

Person doWork2()
{
    Person p1;
    cout << "Address of p1: " << &p1 << endl;
    return p1;
}
void test3()
{
    Person p = doWork2();
    cout << "Address of p: " << &p << endl;

}

int main()
{
    // test1();
    // test2();
    test3();
    return 0;
}
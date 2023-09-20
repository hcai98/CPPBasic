#include <iostream>
using namespace std;

// If you write a parameterized constructor, then c++
// no longer provide default constructor

// If you write a copy constructor, then c++ no longer
// provide any other type of constructor

class Person
{
public:
    Person()
    {
        cout << "Default Constructor" << endl;
    }

    Person(int a)
    {
        age = a;
        cout << "Parameterized Constructor!" << endl;
    }

    Person(const Person &p)
    {
        age = p.age;
        cout << "Copy Constructor" << endl;
    }
    ~Person()
    {
        cout << "Deconstructor" << endl;
    }

public:
    int age;
};

void test01()
{
    Person p1(18);
    // If no copy constructor, compile add one,
    // and do shallow copy
    Person p2(p1);

    cout << "p2's age: " << p2.age << endl;
}

void test02()
{
    Person p1;     
    Person p2(10); 
    Person p3(p2); 

    Person p4;    
    Person p5(10);
    Person p6(p5); 
}

int main()
{

    test01();
    // test02();

    return 0;
}

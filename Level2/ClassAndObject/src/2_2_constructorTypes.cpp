#include <iostream>
using namespace std;

/*
Categories of constructors:
 1. Default
 2. Parameterized
 3. Copy
*/

class Person
{

public:
    // Default
    Person()
    {
        cout << "Person's Default Constructor" << endl;
    }

    // Parameterized
    Person(int a)
    {
        age = a;
        cout << "Person's Parameterized Constructor" << endl;
    }

    // Copy
    Person(const Person &p)
    {
        age = p.age;
        cout << "Person's Copy Constructor" << endl;
    }

    ~Person()
    {
        cout << "Person's Destructor." << endl;
    }

    int age;
};

// Calling Constructor
// Calling default constructor
void test01()
{
    Person p;
}

// Calling parameterized constructor
void test02()
{

    // 1. by parenthesis
    Person p1(10);
    // Note：Dont include parenthesis when
    //       using default constructor, compiler
    //       would think it's a function declaration
    // Person p2();

    // 2. explicit
    Person p2 = Person(10);
    Person p3 = Person(p2); // Copy constructor
    // Person(10) is an Anomynous Object, it is deconstructed after the line

    // 3. implicit (convert)
    Person p4 = 10; // Person p4 = Person(10);
    Person p5 = p4; // Person p5 = Person(p4);

    // Note：Dont use copy constructor to initialize anonymous object,
    //s compiler would think it's a declaration
    // Person(p4);
}

int main()
{
    // test01();
    test02();

    return 0;
}
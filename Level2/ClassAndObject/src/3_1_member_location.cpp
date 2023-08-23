#include <iostream>
using namespace std;

// Only non-static member variable belongs to the class
// Non-static function and static function/variable are not class specific

class Person1
{
};

class Person2
{
    int m_A; // it's on the object
};
class Person3
{
public:
    int m_A; // it's on the object
    static int m_B; // it's on the object
};
int Person3::m_B = 100;
class Person4
{
public:
    int m_A; // it's on the object
    void func() {} // non-static member function
};


void test()
{
    Person1 p1;
    // null object takes 1 byte => to differentiate between null objects
    // every object should have an unique memory address
    cout << "Size of p1: " << sizeof(p1) << endl;

    Person2 p2;
    cout << "Size of p2: " << sizeof(p2) << endl;

    Person3 p3;
    cout << "Size of p3: " << sizeof(p3) << endl; // still 4, static vars are not stored in the object

    Person4 p4;
    cout << "Size of p4: " << sizeof(p4) << endl; // function also not stored in object
}
void test3()
{

}


int main()
{
    test();

    return 0;
}
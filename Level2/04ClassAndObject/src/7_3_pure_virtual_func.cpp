#include <iostream>
using namespace std;

// 1. A class is abstract if it has at least one pure virtual function.
// 2. Abstract class cannot be instantiated
// 3. If we do not override the pure virtual function in the derived class, then the derived class also becomes an abstract class.

class Base
{
public:
    // Pure Virtual Function
    virtual void func() = 0;
};

class Child : public Base
{
public:
    virtual void func()
    {
        cout << "function call" << endl;
    };
};

void test()
{
    Base *base = NULL;
    // base = new Base; // Error, abstract class cannot be instantiated
    base = new Child;
    base->func();
    delete base;
}

int main()
{
    test();
    return 0;
}
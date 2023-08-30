#include <iostream>
using namespace std;


class Base
{
public:
    Base()
    {
        cout << "Constructor (Base)" << endl;
    }
    ~Base()
    {
        cout << "Destructor (Base)" << endl;
    }

};

class Child: public Base
{
public:
    Child()
    {
        cout << "Constructor (Child)" << endl;
    }
    ~Child()
    {
        cout << "Destructor (Child)" << endl;
    }
};


void test()
{
    // Base b;
    Child c;
}

int main()
{
    test();
    return 0; 
}
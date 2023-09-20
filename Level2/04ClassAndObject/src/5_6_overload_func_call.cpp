#include <iostream>
using namespace std;

// Function Call Operator () Overloading

class MyPrint
{
public:
    // overload function call operator
    void operator()(string test)
    {
        cout << test << endl;
    }
};

class MyAdd
{
public:
    // overload function call operator
    int operator()(int a, int b)
    {
        return a + b;
    }
};

void MyPrint2(string test)
{
    cout << test << endl;
}

void test()
{
    MyPrint myPrint;
    myPrint("Hello World");

    MyPrint2("Hello World");
}

void test2()
{
    MyAdd myadd;
    cout << myadd(2, 3) << endl;
    
    // Anonymous function object
    cout << MyAdd()(100, 100) << endl;
}

int main()
{
    test();
    test2();
    return 0;
}
#include <iostream>
using namespace std;

// pass by value
void mySwap1(int a, int b)
{
    int temp = a;
    a = b;
    b = a;
}

// pass by address
void mySwap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// pass by reference
void mySwap3(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{

    int a = 10;
    int b = 20;

    mySwap1(a, b);
    cout << "a:" << a << " b:" << b << endl;

    mySwap2(&a, &b);
    cout << "a:" << a << " b:" << b << endl;

    mySwap3(a, b);
    cout << "a:" << a << " b:" << b << endl;

    return 0;
}
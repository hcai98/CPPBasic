#include<iostream>
using namespace std;


// Coniditons:
// 1. Exist in the same scope
// 2. Same function name
// 3. Different params (different type/number/order)

// Try to avoid default when overloading => easily cause confusion
void func()
{
    cout << "function call" << endl;
}

void func(int a)
{
    cout << "function call (int a)" << endl;
}

void func(double a)
{
    cout << "function call (double a)" << endl;
}
void func(double a, int b)
{
    cout << "function call (double a, int b)" << endl;
}


int main() 
{
     
    func();
    func(10);
    func(1.1);
    func(1.1, 10);
    return 0;
}
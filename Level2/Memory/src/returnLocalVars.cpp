#include <iostream>
using namespace std;

int *func()
{
    int a = 10;
    return &a; // DO NOT DO THIS
}

int main()
{

    int *p = func();

    // this will cause segmentation fault
    cout << *p << endl;
}
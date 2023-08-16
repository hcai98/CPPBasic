#include <iostream>
using namespace std;

int main()
{

    // Defining an interger
    int a = 10;

    // pointer declaration syntax: data type * variable name;
    int *p;

    // assign value to a pointer
    p = &a;                  // p points to the address of a
    cout <<  (long) &a << endl; // print a's address
    cout <<  (long) p << endl;  // print pointer p

    // 2. Using a pointer
    // Use * to get the value stored at a pointer
    cout << "*p = " << *p << endl;

    system("pause");

    return 0;
}
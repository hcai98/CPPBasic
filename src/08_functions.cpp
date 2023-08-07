#include <iostream>
#include <cmath>

using namespace std;

// create a function stub
void sayHello(string name, int age);

int main()
{

    sayHello("Mike", 21);
    sayHello("Tom", 39);
    sayHello("Steve", 31);
    
    return 0;
}


void sayHello(string name, int age)
{
    cout << "Hello " << name << " You are :" << age << endl;
}
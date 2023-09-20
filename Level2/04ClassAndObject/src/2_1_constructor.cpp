#include<iostream>
using namespace std;


// constructor: classname(){}
// destructor ~classname(){}

class Person
{

public:
    // constructor
    Person() 
    {
        cout << "Constructor called." << endl;
    }

    // destructor (cannot have parameters)
    ~Person()
    {
        cout << "Destructor called." << endl;
    }
};

void test () {
    Person p;
    cout << "Test running." << endl;
}

int main()
{
 
    test();
    cout << "Test finished." << endl;

    Person p1; 
    
    // linux pause
    system("read -p 'Press Enter to continue...' var");

    return 0;
}
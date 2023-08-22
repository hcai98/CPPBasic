#include <iostream>
using namespace std;

class Person 
{

public:

    // Initializer List
    Person(int a, int b, int c): A(a), B(b), C(c) {};
    // Person(int a, int b, int c) {
    //     A = a;
    //     B = b;
    //     C = c;
    // }

    int A;
    int B;
    int C;
};

void test1()
{
    Person p(30, 20 , 10);
    cout << "A = " << p.A << endl;
    cout << "B = " << p.B << endl;
    cout << "C = " << p.C << endl;
}


int main()
{

    test1();

    return 0;
}
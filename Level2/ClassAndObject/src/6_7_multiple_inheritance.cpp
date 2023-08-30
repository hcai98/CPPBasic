#include <iostream>
using namespace std;


class Base1 {
public:
	Base1()
	{
		m_A = 100;
	}
public:
	int m_A;
};

class Base2 {
public:
	Base2()
	{
		m_A = 200;  
	}
public:
	int m_A;
};

// Multiple Inheritance
class Child : public Base2, public Base1 
{
public:
	Child()
	{
		m_C = 300;
		m_D = 400;
	}
public:
	int m_C;
	int m_D;
};



// Test 1
void test()
{
    Child c;
    
    cout << c.Base1::m_A << endl;
    cout << c.Base2::m_A << endl;


}


int main()
{
    test();
    return 0;
}
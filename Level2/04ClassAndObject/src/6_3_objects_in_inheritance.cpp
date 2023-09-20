#include <iostream>
using namespace std;

class Parent
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Child :public Parent
{
public:
	int m_D;
};


void test()
{
   cout << "size of child = " << sizeof(Child) << endl;
}

int main()
{
    test();
    return 0; 
}
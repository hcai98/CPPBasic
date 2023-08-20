#include<iostream>
using namespace std;

class C1
{
	int  m_A; // default to private
};

struct C2
{
	int m_A;  // default to public
};

int main() {

	C1 c1;
	// c1.m_A = 10; //error, defualt to private

	C2 c2;
	c2.m_A = 10; //correct, default to public


	return 0;
}
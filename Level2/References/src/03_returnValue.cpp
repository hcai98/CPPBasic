#include <iostream>
using namespace std;

// NOTE: Do NOT return local variables!!


int& test01() {
	int a = 10; // Local Variables
	return a;
}

int& test02() {
	static int a = 20; // Static Variable
	return a;
}

int main() {

	// int& ref = test01();
	// cout << "ref = " << ref << endl;
	// cout << "ref = " << ref << endl;

	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;

	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;


	return 0;
}
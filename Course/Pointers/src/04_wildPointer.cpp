#include <iostream>
using namespace std;



int main() {

    // wild pointer
	int * p = (int *)0x1100;

	//segmentation fault
	cout << *p << endl;

	system("pause");

	return 0;
}
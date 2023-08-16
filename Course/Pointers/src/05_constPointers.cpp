#include <iostream>
using namespace std;

int main() {

	int a = 10;
	int b = 10;

	// const describes the value
	const int * p1 = &a; 
	p1 = &b; // correct
	//*p1 = 100; error
	

	// const describes the pointer
	int * const p2 = &a;
	//p2 = &b; //error
	*p2 = 100; //correct

    // const describes both value and pointer
	const int * const p3 = &a;
	//p3 = &b; //error
	//*p3 = 100; //error

	return 0;
}
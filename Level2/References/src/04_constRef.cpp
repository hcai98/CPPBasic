#include <iostream>
using namespace std;


// restrict modification of the value passed in
void showValue(const int& v) {
	//v += 10;
	cout << v << endl;
}

int main() {

	//int& ref = 10; // Cant' do this because you need an address first
	//The same as: int temp = 10; const int& ref = temp;
	const int& ref = 10;

	//ref = 100;  // you cannot modify value stored at the const ref
	cout << ref << endl;

	int a = 10;
	showValue(a);
    
    cout << "a = " << a << endl;


	return 0;
}
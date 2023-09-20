#include<iostream>
using namespace std;

int func(int a, int b = 10, int c = 10) {
	return a + b + c;
}

int func2(int a = 10, int b = 10);
int func2(int a, int b) {
	return a + b;
}

int main() {

	cout << "ret = " << func(20, 20) << endl;
	cout << "ret = " << func(100) << endl;


	return 0;
}
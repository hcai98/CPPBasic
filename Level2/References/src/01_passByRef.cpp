#include<iostream>
using namespace std;


int main()
{

 	int a = 10;
	int &b = a; // pass by reference

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

    b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


    return 0;
}
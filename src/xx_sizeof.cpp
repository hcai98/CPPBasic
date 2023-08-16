#include <iostream>
using namespace std;

int main() {
	
    cout << "space occupied by type char: " << sizeof(char) << endl;
    cout << "space occupied by type char[10]: " << sizeof(char[10]) << endl;

	cout << "space occupied by type short: " << sizeof(short) << endl;

	cout << "space occupied by type int: " << sizeof(int) << endl;
	cout << "space occupied by type int[10]: " << sizeof(int[10]) << endl;

	cout << "space occupied by type long: " << sizeof(long) << endl;

	cout << "space occupied by type long long: " << sizeof(long long) << endl;

	// system("pause");

    return 0;

}
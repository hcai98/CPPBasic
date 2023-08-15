#include <iostream>
using namespace std;

int main() {

    int a = 10;
    long a1 = 10000;
    long a2 = 10000;
    int a3[] = {1, 2, 3, 4};
    string b = "aaaaaaaaaa";
    char b1[] = "aaaaaaa";

    cout << sizeof(a) << endl;
    cout << sizeof(a1) << endl;
    cout << sizeof(a2) << endl;
    cout << sizeof(a3) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(b1) << endl;

    return 0;

}
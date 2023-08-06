#include<iostream>
#include <cmath>


using namespace std;

int main() {

    cout << "Enter Your Name: ";
    
    // get input string
    string name;
    getline(cin, name);

    cout << "Hello " << name << endl;

    return 0;
}
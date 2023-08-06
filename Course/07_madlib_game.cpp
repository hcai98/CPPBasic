#include<iostream>
#include <cmath>

using namespace std;

int main() {
    
    string color, pluralNoun, celebrity;

    // prompt user for input
    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);
    cout << "Enter a celebrity: ";
    getline(cin, celebrity);


    // print story
    cout << "Roses are " << color << endl;
    cout << pluralNoun <  " are blue" <<endl;
    cout << "I love " << celebrity << endl;

    return 0;
}
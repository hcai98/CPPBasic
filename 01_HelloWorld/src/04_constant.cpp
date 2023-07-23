#include<iostream>
using namespace std;

// How to define a constant
/*
1. #define identifier token

2. const datatype varname = value
*/

// 1. #define
#define Day 7

int main() {
    
    cout << "Days in a week: " << Day << endl; 

    // 2. use const
    const int month = 12;
    cout << "Months in a year: " << month << endl;

    return 0;
}
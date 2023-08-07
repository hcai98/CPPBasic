#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    // integer array
    int luckyNums[] = {4, 8, 15, 16, 23, 42};

    // accessing element in array
    cout << luckyNums[2] << endl;

    // modifying element in an array
    luckyNums[2] = 999;
    cout << luckyNums[2] << endl;

    int numArray2[20] = {1, 45, 19, 20};
    numArray2[10] = 888;
    cout << numArray2[10] << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    // while loop
    int index = 1;
    while (index <= 10)
    {
        cout << index++ << endl;
    }

    // do while loop
    index = 1;
    do
    {
        cout << index++ << endl;
    } while (index <= 10);

    return 0;
}
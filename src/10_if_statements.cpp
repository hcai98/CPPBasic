#include <iostream>
#include <cmath>

using namespace std;

/*
    && and
    || or
    ! negation operator
*/

int main()
{

    bool isPerson = true;
    bool isTall = false;

    if (isPerson && isTall)
    {
        cout << "You are a tall person" << endl;
    }
    else if (isPerson && !isTall)
    {
        cout << "You are a short person" << endl;
    }
    else if (!isPerson && isTall)
    {
        cout << "You are a tall non-person" << endl;
    }
    else
    {
        cout << "You are a short non-person" << endl;
    }

    // if(isPerson || isTall) {
    //     cout << "You are tall or you are a person" << endl;
    // } else {
    //     cout << "You are neither tall nor a person" << endl;
    // }

    return 0;
}
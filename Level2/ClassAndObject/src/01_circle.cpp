#include<iostream>
using namespace std;

// Design a circle, and get perimeter
// p = 2 * PI * radius

const double pi = 3.1415926;

class Circle
{

// can be accessed in and out of class
public:
 
    // radius
    double r;

    // get perimeter
    double calculate_perimeter()
    {
        return 2 * pi * r;
    }

};


int main()
{


    Circle c1;
    c1.r = 10;

    cout << "Raidus is: " << c1.r << endl;
    cout << "Perimeter is: " << c1.calculate_perimeter() << endl;

    return 0;
}
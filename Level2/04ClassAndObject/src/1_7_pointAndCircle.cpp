#include <iostream>
#include <cmath>
using namespace std;

class Point
{
public:
    // constructor
    Point(){};
    Point(const double &x, const double &y)
    {
        m_x = x;
        m_y = y;
    }
    Point(double &x, double &y)
    {
        m_x = x;
        m_y = y;
    }

    double getX() { return m_x; }
    double getY() { return m_y; }

    // print the point
    void printPoint(bool newLine = true)
    {
        cout << "(" << m_x << ", " << m_y << ")";
        if (newLine)
        {
            cout << endl;
        }
    }

    double distanceFrom(Point &p)
    {
        double p_x = p.getX();
        double p_y = p.getY();
        return sqrt(pow(p_x - m_x, 2) + pow(p_y - m_y, 2));
    }

private:
    double m_x;
    double m_y;
};

class Circle
{
public:
    Circle(const Point &c, const double &r)
    {
        m_r = r;
        m_c = c;
    }

    // print the circle
    void printCircle()
    {
        cout << "Center: ";
        m_c.printPoint(false);
        cout << " Radius: " << m_r << endl;
        ;
    }

    bool isInCircle(Point &point)
    {
        return point.distanceFrom(m_c) <= m_r;
    }

private:
    double m_r;
    Point m_c; // center
};

int main()
{
    // create two points
    Point p1(1, -1);
    Point p2(2, 1);
    p1.printPoint();
    p2.printPoint();
    cout << "Distance betwee p1 and p2: "
         << p1.distanceFrom(p2)
         << endl;

    // create a circle
    Circle c(Point(0, 0), 2);
    c.printCircle();

    cout << "Is p1 in c? " << c.isInCircle(p1) << endl;
    cout << "Is p2 in c? " << c.isInCircle(p2) << endl;

    return 0;
}
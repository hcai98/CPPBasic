#include <iostream>
using namespace std;

class Cube
{

public:
    Cube(int height, int weight, int length)
    {
        m_H = height;
        m_W = weight;
        m_L = length;
    }
    void setHeight(int height) { m_H = height; }
    void setWeight(int weight) { m_W = weight; }
    void setLength(int length) { m_L = length; }

    int getHeight() { return m_H; }
    int getWeight() { return m_W; }
    int getLength() { return m_L; }

    int calcSurfaceArea()
    {
        return 2 * (m_H * m_L + m_H * m_W + m_L * m_W);
    }
    int calcVolume()
    {
        return m_H * m_L * m_W;
    }

    bool isEqual(Cube &c)
    {
        if (c.getHeight() == m_H && c.getWeight() == m_W && c.getLength() == m_L)
        {
            return true;
        }

        return false;
    }

private:
    int m_H;
    int m_L;
    int m_W;
};

int main()
{
    Cube c1(10, 20, 80);
    Cube c2(10, 20, 80);
    Cube c3(10, 20, 120);

    cout << "C1 is the same as C2: " << c1.isEqual(c2) << endl;
    cout << "C1 is the same as C3: " << c1.isEqual(c3) << endl;
    cout << "Surface Area of C1: " << c1.calcSurfaceArea() << endl;
    cout << "Volume of C1: " << c1.calcVolume() << endl;

    return 0;
}
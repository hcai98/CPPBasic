#include <iostream>
using namespace std;

class Person
{
public:
    Person(){};
    Person(int a, int b)
    {
        this->m_A = a;
        this->m_B = b;
    }
    // // 1. 
    // overload addition via member function
    // Person operator+(Person &p)
    // {
    //     Person temp;
    //     temp.m_A = this->m_A + p.m_A;
    //     temp.m_B = this->m_B + p.m_B;
    //     return temp;
    // }

public:
    int m_A;
    int m_B;
};

// 2. Overload Addition via global function
Person operator+(Person &p1, Person &p2)
{
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}

// 3. Overload an operator overload
Person operator+(Person p1, int num)
{
    Person temp;
    temp.m_A = p1.m_A + num;
    temp.m_B = p1.m_B + num;
    return temp;  
}

void test()
{

    Person p1(10, 20);
    Person p2(100, 200);

    // Person p3 = p1.operator+(p2);
    // cout << "p3.m_A: " << p3.m_A << " p3.m_B: " << p3.m_B << endl;
    // ;

    Person p4 = p1 + p2; // opreator+(p1, p2) or p1.opeartor+(p2) 
    cout << "p4.m_A: " << p4.m_A << " p4.m_B: " << p4.m_B << endl;

    // overload
    Person p5 = p1 + 10; // opreator+(p1, 10)
    cout << "p5.m_A: " << p5.m_A << " p5.m_B: " << p5.m_B << endl;

}

int main()
{
    test();
    // cout << "LOL" << endl;
    return 0;
}
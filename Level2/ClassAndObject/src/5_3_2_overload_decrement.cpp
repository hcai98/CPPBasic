#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream &operator<<(ostream &cout, const MyInteger &myint);

public:
    MyInteger()
    {
        cout << ">> Default Constructor" << endl;
        m_Num = 100;
    }

    MyInteger(const MyInteger &myint)
    {
        this->m_Num = myint.m_Num;
        cout << ">> Copy Constructor" << endl;
    }

    // prefix decrement
    MyInteger& operator--()
    {
        m_Num--;
        return *this;
    }

    // postfix decrement
    MyInteger operator--(int)
    {
        MyInteger temp = *this;
        m_Num--;
        return temp;
    }


private:
    int m_Num;
};

ostream &operator<<(ostream &cout, const MyInteger &myint)
{
    cout << myint.m_Num;
    return cout;
}

void test()
{
    MyInteger myint;
    cout << myint << endl;
    cout << --myint << endl;
    cout << --(--myint) << endl;

    MyInteger myint2;
    cout << myint2<< endl;
    cout << myint2-- << endl;
    cout << myint2<< endl;
}

int main()
{

    test();
    return 0;
}
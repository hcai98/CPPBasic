#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream &operator<<(ostream &cout, const MyInteger &myint);

public:
    MyInteger() 
    {
        cout << "Default Constructor" << endl;
        m_Num = 0;
    }

    MyInteger(const MyInteger & myint) 
    {
        this->m_Num = myint.m_Num;
        cout << "Copy Constructor" << endl;
    }

    // prefix increment overload 
     MyInteger& operator++()
    {
        m_Num += 1;
        return *this; 
    }

    // postfix increment overload 
    MyInteger operator++(int)
    {
        // step 1 - log current value
        MyInteger temp  = *this;
        // step 2 - increment
        m_Num ++;
        // step 3 - return logged value
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
    cout << ++myint << endl;
    cout << myint++ << endl;
    cout << myint<< endl;

}


int main()
{

    test();
    return 0;
}
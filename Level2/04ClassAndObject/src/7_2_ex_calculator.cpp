#include <iostream>
using namespace std;

class Calculator
{

public:
    int getResult(string oper)
    {
        if (oper == "+")
        {
            return num1 + num2;
        }
        else if (oper == "-")
        {
            return num1 - num2;
        }
        else if (oper == "*")
        {
            return num1 * num2;
        }
    }

    int num1;
    int num2;
};

class AbstractCalculator
{
public:
    virtual int getResult(){};
    int num1;
    int num2;
};

class AddCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return num1 + num2;
    }
};
class SubCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return num1 - num2;
    }
};
class MultCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return num1 * num2;
    }
};

void test()
{
    Calculator c;
    c.num1 = 20;
    c.num2 = 10;

    cout << c.num1 << " + " << c.num2 << " = " << c.getResult("+") << endl;
    cout << c.num1 << " - " << c.num2 << " = " << c.getResult("-") << endl;
    cout << c.num1 << " * " << c.num2 << " = " << c.getResult("*") << endl;
}

void test2()
{

    AbstractCalculator *pC = new AddCalculator;
    pC->num1 = 20;
    pC->num2 = 10;
    cout << pC->num1 << " + " << pC->num2 << " = " << pC->getResult() << endl;
    delete pC;

    pC = new SubCalculator;
    pC->num1 = 20;
    pC->num2 = 10;
    cout << pC->num1 << " - " << pC->num2 << " = " << pC->getResult() << endl;
    delete pC;

    pC = new MultCalculator;
    pC->num1 = 20;
    pC->num2 = 10;
    cout << pC->num1 << " * " << pC->num2 << " = " << pC->getResult() << endl;
    delete pC;

}

int main()
{
    // test();
    test2();
    return 0;
}
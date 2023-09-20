#include <iostream>
using namespace std;

class Beverage
{

public:
    virtual void broilWater() = 0;
    virtual void brew() = 0;
    virtual void pour() = 0;
    virtual void addStuffs() = 0;

    void make_beverage()
    {
        broilWater();
        brew();
        pour();
        addStuffs();
    }
};

class Tea : public Beverage
{
    virtual void broilWater()
    {
        cout << "Broil water" << endl;
    }
    virtual void brew()
    {
        cout << "Pour water into tea" << endl;
    }
    virtual void pour()
    {
        cout << "Pour tea into cup" << endl;
    }
    virtual void addStuffs(){};
};

class Coffee : public Beverage
{
    virtual void broilWater()
    {
        cout << "Broil water" << endl;
    }
    virtual void brew()
    {
        cout << "Pour water into coffee" << endl;
    }
    virtual void pour()
    {
        cout << "Pour cofee into cup" << endl;
    }
    virtual void addStuffs()
    {
        cout << "Add milk and sugar" << endl;
    };
};

void doWork(Beverage *b)
{
    b->make_beverage();
    delete b;
}

void test()
{

    Beverage *b = NULL;

    doWork(new Coffee);

    cout << endl;

    doWork(new Tea);
}

int main()
{
    test();
    return 0;
}
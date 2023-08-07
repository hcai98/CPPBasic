#include <iostream>
using namespace std;

// Super class
class Chef
{
  public:
    void makeChicken()
    {
        cout << "THe chef makes chicken" << endl;
    }
    void makeSalad()
    {
        cout << "THe chef makes salad" << endl;
    }
    void makeSpecialDish()
    {
        cout << "THe chef makes bbq ribs" << endl;
    }
};

// Sub class
class ItalianChef : public Chef
{
  public:
    // extend
    void makePasta()
    {
        cout << "The chef makes pasta" << endl;
    }

    // override
    void makeSpecialDish()
    {
        cout << "THe chef makes chicken parm" << endl;
    }   
};

int main()
{
    // normal chef
    Chef chef1;
    chef1.makeChicken();
    chef1.makeSpecialDish();

    // italian chef
    ItalianChef italianchef;
    italianchef.makeChicken();
    italianchef.makePasta();
    italianchef.makeSpecialDish();

    return 0;
}
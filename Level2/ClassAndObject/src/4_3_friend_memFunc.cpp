#include <iostream>
using namespace std;

class Building;

// GoodFriend Class
class GoodFriend
{
public:
    GoodFriend();

    Building *building;

    void visit();  // allow it access private member in Building
    void visit2(); // ban it from accessing private member in Building
};

// Building Class
class Building
{
    // make only member function "visit" of GoodFriend a friend
    friend void GoodFriend::visit();

public:
    string livingroom;

    Building();

private:
    string bedroom;
};

// Constructors
GoodFriend::GoodFriend()
{
    building = new Building;
}
Building::Building()
{
    livingroom = "my livingroom";
    bedroom = "my bedroom";
}

// Member Functions
void GoodFriend::visit()
{
    cout << "Good friend accessing: "
         << building->livingroom << endl;
    cout << "Good friend accessing: "
         << building->bedroom << endl;
}
void GoodFriend::visit2()
{
    cout << "Good friend accessing: "
         << building->livingroom << endl;
    //    cout << "Good friend accessing: "
    //          << building->bedroom << endl;
}

void test()
{
    GoodFriend gf;
    gf.visit();
    gf.visit2();
}

int main()
{
    test();
    return 0;
}
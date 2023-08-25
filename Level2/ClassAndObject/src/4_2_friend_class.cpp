#include <iostream>
using namespace std;

class Building;

// friend class
class GoodFriend
{
public:
    GoodFriend();
    void visit();
    Building *building;
};

// Building Class
class Building
{
    friend class GoodFriend; // GoodFriend is a "friend" of the current class, it can access private member
public:
    Building();
    string livingroom;

private:
    string bedroom;
};

// Implement member function outside of class
Building::Building()
{
    livingroom = "my livingroom";
    bedroom = "my bedroom";
}
GoodFriend::GoodFriend()
{
    // create a building object
    building = new Building;
}
void GoodFriend::visit()
{
    cout << "Good friend accessing: " << building->livingroom << endl;
    cout << "Good friend accessing: " << building->bedroom << endl;
}

// Test Function
void test()
{
    GoodFriend gf;
    gf.visit();
}

// Main Function
int main()
{
    test();
    return 0;
}
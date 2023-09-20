#include <iostream>
using namespace std;

class Building
{
    // goodFriend is a "friend" of Building, it can access private member
    friend void goodFriend(Building &building);

public:
    Building()
    {
        m_LivingRoom = "my livingroom";
        m_BedRoom = "my bedroom";
    }

    string m_LivingRoom;

private:
    string m_BedRoom;
};

// global function
void goodFriend(Building &building)
{
    cout << "Good friend accessing: "
        << building.m_LivingRoom << endl;
    
    cout << "Good friend accessing: "
        << building.m_BedRoom << endl;
}

int main()
{

    Building building;
    goodFriend(building);

    return 0;
}
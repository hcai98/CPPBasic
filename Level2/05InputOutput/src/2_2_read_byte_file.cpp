#include <iostream>
#include <fstream>

using namespace std;

// istream& read(char *buffer,int len)

class Person
{
public:
    char m_Name[64];
    int m_Age;
};

void test()
{

    // 1. Include fstream header

    // 2. Create stream object
    ifstream ifs;

    // 3. Open file
    ifs.open("person.txt", ios::in | ios::binary);
    if(!ifs.is_open()) 
    {
        cout << "Error opening the file!" << endl;
        return;
    }

    // 4. Read file
    Person p;
    ifs.read( (char *) &p, sizeof(p));
    
    cout << "Name: " << p.m_Name << " Age: " << p.m_Age << endl;

    // 5. Close file
    ifs.close();


}

int main()
{
    test();
    return 0;
}
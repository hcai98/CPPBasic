#include <iostream>
#include <fstream>

using namespace std;

// ostream& write(const char * buffer,int len)

class Person
{
public:
    char m_Name[64];
    int m_Age;
};

void test()
{

    // 1. Include Header

    // 2 . Create Stream Object
    // ofstream ofs;
    ofstream ofs("person.txt", ios::out | ios::binary);

    // 3. Open File
    // ofs.open("person.txt", ios::out | ios::binary);

    // 4. Write to File 
    Person p = {"Jack", 18};
    ofs.write((const char *)&p, sizeof(Person));

    // 5. Close file
    ofs.close();
}

int main()
{
    test();
    return 0;
}
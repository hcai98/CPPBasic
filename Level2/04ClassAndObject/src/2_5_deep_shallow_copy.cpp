#include <iostream>
using namespace std;

class Person
{

public:
    Person()
    {
        cout << "Default Consturctor" << endl;
    }

    Person(int age, int height)
    {
        this->age = age;
        pHeight = new int(height);

        cout << "Parameterized Constructor" << endl;
    }

    // Deep Copy
    Person(const Person &p)
    {

        this->age = p.age;
        this->pHeight = new int(*p.pHeight); // Deep Copy 

        cout << "Copy Constructor" << endl;
    }

    ~Person()
    {
        // release data in heap
        if (pHeight != NULL)
        {
            delete pHeight;
            pHeight = NULL;
            cout << "Pointer deleted!" << endl;
        }

        cout << "Destructor" << endl;
    }
    int age;
    int *pHeight;
};

void test1()
{
    Person p1(18, 170);
    cout << "P1's age: " << p1.age << " Height: " << *(p1.pHeight) << endl;

    Person p2(p1);
    cout << "P2's age: " << p2.age << " Height: " << *(p2.pHeight) << endl;
}

int main()
{
    test1();

    cout << endl;
    return 0;
}
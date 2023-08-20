#include <iostream>
using namespace std;

class Person
{

public:
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    void setAge(int age)
    {
        if (age < 0 || age > 150)
        {
            cout << "Invalid Age!" << endl;
            return;
        }
        this->age = age;
    }
    int getAge()
    {
        return this->age;
    }

private:
    string name;
    int age;
};

int main()
{
    Person p;
    p.setName("Jason");
    p.setAge(18);
    p.setAge(1000);

    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    return 0;
}
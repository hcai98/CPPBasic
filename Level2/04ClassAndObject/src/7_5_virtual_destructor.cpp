#include <iostream>
using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "Animal Constructor" << endl;
    }
    // virtual ~Animal()
    // {
    //     cout << "Animal's Virtual Destructor" << endl;
    // }    
    virtual ~Animal() = 0; // this must be implemented
    virtual void speak() = 0;
};

// implementation of pure virtual destructor
Animal::~Animal() 
{
    cout << "Animal's Pure Virtual Destructor" << endl;
}

class Cat : public Animal
{
public:
    Cat(string name)
    {
        cout << "Cat Constructor" << endl;
        this->name = new string(name);
    }
    ~Cat()
    {
        if (this->name != NULL)
        {
            cout << "Cat Destructor" << endl;
            delete name;
            name = NULL;
        }
    }

    void speak()
    {
        cout << "Cat " << *name << " is speaking" << endl;
    }

    string *name;
};

void test()
{
    Animal *a = new Cat("Tom");
    a->speak();

    // Base class pointer does not call the derived class's destructor
    // This cause memory leakage
    // We use virtual destructor to solve this issue.f
    delete a;
}

int main()
{
    test();
    return 0;
}
#include <iostream>
using namespace std;

// 1. Compile Time (static) : overloading
// 2. Run Time (Dyanamic): derived class and virtual function
//      2.1 Inheritance
//      2.2 Child override Parent's virtual functions

class Animal
{
public:
    void speak()
    {
        cout << "Animal is speaking" << endl;
    }

    // Late Binding
    virtual void speak2()
    {
        cout << "Animal is speaking" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Cat is speaking" << endl;
    }
    void speak2()
    {
        cout << "Cat is speaking" << endl;
    }
};


class Dog : public Animal
{
public:
    void speak2()
    {
        cout << "Dog is speaking" << endl;
    }
};

// Early Binding: Function address is determined during compile
// If we want cat to talk, then the function address cannot be binded early.
void doSpeak(Animal &animal)
{
    animal.speak(); //  Early Binding
    animal.speak2(); // Late Binding
}

void test()
{
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);
}


void test2()
{
    cout << "size of Animal: " << sizeof(Animal) << endl;
}

int main()
{
    test();
    test2();
    cout << "Test Ends" << endl;

    Animal * aPtr;
    Cat cat;
    cat.speak2();

    aPtr = &cat;
    aPtr->speak2();

    return 0;
}

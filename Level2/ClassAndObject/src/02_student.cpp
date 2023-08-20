#include<iostream>
using namespace std;


class Student
{

public:

    string name;
    int id;

    void print_name()
    {
        cout << "Name: " << this->name << endl;
    }
    void print_id()
    {
        cout << "ID: " << this->id << endl;
    }


};




int main()
{

    Student s;
    s.name = "John";
    s.id = 1234;

    s.print_name();
    s.print_id();


    return 0;
}
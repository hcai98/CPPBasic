#include <iostream>
using namespace std;

int *func()
{
    // !!! Potential Memory Leakage
    int* a = new int(10); // allocate space in heap
    return a;
}

int main()
{

    int *p = func();

    cout << *p << endl;
    cout << *p << endl;

    // release the heap memory to avoid leakage
    delete p;

    cout << *p << endl << endl;

    // new array
    int* arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 100;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    // print before delete
    cout << *arr << endl; 

    // release the memory
    delete[] arr;

    // print after delete
    cout << *arr << endl; 

    return 0;
}
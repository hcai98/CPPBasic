#include <iostream>
using namespace std;

void printArray(int* arr, int arr_size) {

    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    int arr1[5] = {1,3,2,5,4};

    int* p = arr1;

    // // cout << arr1 << endl;
    // // cout << *arr1 << endl;
    // // cout << *(arr1 + 1) << endl;

    int arr_size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[arr_size];

    for (int i = 0; i < arr_size; i++) 
    {
        arr2[i] = arr1[arr_size - i - 1];
    }

    printArray(arr1, arr_size);
    printArray(arr2, arr_size);
}
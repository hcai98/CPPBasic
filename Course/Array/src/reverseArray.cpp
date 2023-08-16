#include <iostream>
using namespace std;

void printArray(int *arr, int arr_size)
{

    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};

    int *p = arr1;

    // cout << arr1 << endl;
    // cout << *arr1 << endl;
    // cout << *(arr1 + 1) << endl;

    int arrSize = sizeof(arr1) / sizeof(arr1[0]);
    int pLeft = 0;
    int pRight = arrSize - 1;
    int temp;

    printArray(arr1, arrSize);

    while (pLeft < pRight)
    {
        if (pLeft < pRight)
        {
            temp = arr1[pLeft];
            arr1[pLeft] = arr1[pRight];
            arr1[pRight] = temp;
        }

        pLeft++;
        pRight--;
    }

    printArray(arr1, arrSize);
}
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

    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};

    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int temp;

    cout << "original array: ";
    printArray(arr, arrSize);

    for (int i = 1; i < arrSize - 1; i++)
    {
        for (int j = 0; j < arrSize - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

            printArray(arr, arrSize);
        }

        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

void printArray(int arr[], int array_size)
{

    cout << "Array elements are : ";

    for (size_t i = 0; i < array_size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
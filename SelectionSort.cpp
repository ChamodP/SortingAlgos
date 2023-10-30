#include <iostream>
using namespace std;

void selectionSort(int arr[], int array_size)
{

    for (int i = 0; i < (array_size - 1); i++)
    {
        int minLocation = i;
        for (int j = i + 1; j < (array_size); j++)
        {
            if (arr[minLocation] > arr[j])
            {
                minLocation = j;
            }
        }

        // swapping
        if (minLocation != i)
        {
            int temp = arr[i];
            arr[i] = arr[minLocation];
            arr[minLocation] = temp;
        }
    }
}

void printArray(int arr[], int array_size)
{

    cout << "Array elements are : ";

    for (size_t i = 0; i < array_size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int testArr[][9] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9},
        {9, 8, 7, 6, 5, 4, 3, 2, 1},
        {4, 2, 3, 4, 5, 4, 1, 2, 5},
        {5, 5, 5, 5, 5, 5, 5, 5, 5},
        {64, 25, 12, 22, 11, 36, 98, 43, 87}};

    for (int i = 0; i < 5; i++)
    {
        int array_size = sizeof(testArr[i]) / sizeof(testArr[i][0]);

        cout << "---- Befor Sorting ----" << endl;
        printArray(testArr[i], array_size);

        cout << "---- After Sorting ----" << endl;
        selectionSort(testArr[i], array_size);
        printArray(testArr[i], array_size);

        cout<<endl;
    }
}

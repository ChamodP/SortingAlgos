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

void printArray(int arr[],  int array_size)
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
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    int array_size = sizeof(array) / sizeof(array[0]);
    
    cout<<"---- Befor Sorting ----"<<endl;
    printArray(array,array_size);

    cout<<"---- After Sorting ----"<<endl;
    selectionSort(array, array_size);
    printArray(array,array_size);
}

#include "libraries.h"

void bubbleSort(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
       for (int j = 0; j < (size - 1 - i); j++)
       {
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
       }
       
    }
    
}

int main(){

    int testArr[][9] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9},
        {9, 8, 7, 6, 5, 4, 3, 2, 1},
        {4, 2, 3, 4, 5, 4, 1, 2, 5},
        {5, 5, 5, 5, 5, 5, 5, 5, 1},
        {64, 25, 12, 22, 11, 36, 98, 43, 87}};
    
    cout << "---------------------" << endl;
    cout << "---- Bubble Sort ----" << endl;
    cout << "---------------------" << endl;
    cout<<endl;

    for (int i = 0; i < 5; i++)
    {
        int array_size = sizeof(testArr[i]) / sizeof(testArr[i][0]);

        cout << "---- Befor Sorting ----" << endl;
        printArray(testArr[i], array_size);

        cout << "---- After Sorting ----" << endl;
        bubbleSort(testArr[i], array_size);
        printArray(testArr[i], array_size);

        cout<<endl;
    }
}
//Insertion Sort...
#include <stdio.h>
#include <stdlib.h>
void insertionSort(int arr[], int n);
void printElement(int arr[], int n);



int main()
{
    int i, n;
    int arr[] = {9, 5, 1, 4, 3};
    n = sizeof(arr) / sizeof(arr[0]);
    system("cls");
    printf("Before sorting: ");
    printElement(arr, n);
    insertionSort(arr, n);
    printf("\nAfter sorting : ");
    printElement(arr, n);
    return 0;
}

// Sorting algorithms applied....
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        //Set second elements = key
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Print the array element as sorted....
void printElement(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

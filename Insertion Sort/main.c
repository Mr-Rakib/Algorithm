#include <stdio.h>
#include <stdlib.h>

// It Check the next index and changing its desire position.
// Worst Case: O(n^2) Best Case : O(n)
// Stable
// By Default Adaptive

void InsertionSort(int *arr, int n)
{
    int key, j;
    for(int i=1; i<n; i++)
    {
        key =arr[i];
        j = i-1;
        while(j>=0 && arr[j] >key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void PrintArray(int *arr, int n)
{
    for(int index=0; index<n; index++)
    {
        printf("%d ", arr[index]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {111,82,63,14,5,3};
    printf("Before Sorted : ");
    PrintArray(arr, 6);
    InsertionSort(arr,6);
    printf("After Sorted : ");
    PrintArray(arr, 6);
    return 0;
}

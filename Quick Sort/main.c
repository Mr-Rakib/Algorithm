#include <stdio.h>
#include <stdlib.h>

// Quick Sort
// This is a partition algorithm [run till n-1 comparison T(n)= K1n + K2]
// Time Complexity:
// Best Case = O(nlog n), Average Case = O(nlog n), Worst Case = O(n^2)
// Not Stable
// Not Adaptive
// Worst Case: If the array is already sorted.

int Partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int left = low+1;
    int right = high;
    int temp;

    while(left< right)
    {
        while(arr[left]<= pivot)
            left++;
        while(arr[right]>pivot)
            right--;

        if(left<right)
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    //Swap arr[low] to arr[right]
    temp = arr[low];
    arr[low] = arr[right];
    arr[right] = temp;
    return right;
}

void QuickSort(int arr[], int low, int high)
{
    if(low< high)
    {
        int partIndex = Partition(arr, low, high);
        QuickSort(arr, low, partIndex-1);
        QuickSort(arr, partIndex+1, high);
    }
}

void PrintArray(int arr[], int low, int n)
{
    for(int index=low; index<n; index++)
        printf("%d ", arr[index]);

    printf("\n");
}

int main()
{
    int n = 8;
    int arr[] = {15, 7, 8, 4, 9, 2, 0,-3};
    PrintArray(arr,0, n);
    QuickSort(arr,0, n-1);
    PrintArray(arr, 0,n);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

// Merge Sort
// O(n log n);
// Stable
// Adaptive
// Use Divide and Conquer technique
// More efficient than quick sort for huge amount of data

void Merge(int arr[], int mid, int low, int high)
{
    int i, j, k;
    int *b = (int*) malloc((high+1)*sizeof(int));
    i = low;
    j = mid+1;
    k = low;

    while(i<=mid && j<=high)
    {
        b[k++] = (arr[i]< arr[j]) ? arr[i++] : arr[j++];
    }
    while(i<=mid)
    {
        b[k++] = arr[i++];
    }
    while(j<=high)
    {
        b[k++] = arr[j++];
    }
    for(int index = low; index<=high; index++)
    {
        arr[index] = b[index];
    }
    free(b);

}

void MergeSort(int arr[], int low, int high)
{
    int mid;
    if(low< high)
    {
        mid = (high + low)/2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid+1, high);
        Merge(arr, mid, low, high);
    }
}

void PrintArray1(int arr[], int low, int n)
{
    for(int index=low; index<n; index++)
        printf("%d ", arr[index]);

    printf("\n");
}

void PrintArray(int arr[], int n)
{
    for(int index=0; index<n; index++)
        printf("%d ", arr[index]);

    printf("\n");
}

int main()
{
    int n = 10;
    int arr[] = {9,5,1,2,3,4,15,4,6,5};
    PrintArray(arr, n);

    MergeSort(arr, 0, n-1);
    PrintArray(arr, n);
    return 0;
}

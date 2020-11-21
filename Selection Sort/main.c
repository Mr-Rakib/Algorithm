#include <stdio.h>
#include <stdlib.h>

// Selection Sort
// Worst Case: O(n^2) || Best case O(n^2)
// Not Stable
// Not Adaptive
// it will not stop until the loops ends, However the array is already sorted.

void SelectionSort(int *arr, int n ){
    int min;
    for(int i = 0; i<n ; i++){
        min = i;
        for(int j = i+1; j<n; j++){
            if(arr[min]> arr[j]){
                min = j;
            }
        }
        //swap(a[min, a[i]);
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void PrintAll(int *arr, int n)
{
     for(int i = 0; i<n ; i++)
     {
         printf("%d ", arr[i]);
     }
}
int main()
{
    int arr[] = {11,55,1,6,3,9};
    SelectionSort(arr, 6);
    PrintAll(arr, 6);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

// If already sorted then the array should stop and return the answer.
// isSorted is a flag, for check the array is already sorted or not.
// Worst Case: O(n^2) Best Case : O(1)
// Stable
// Adaptive Array (By Default it's not adaptive)

void BubbleSort(int *arr, int n){
    int isSorted =0;
    for(int i=0; i<n-1; i++){
        isSorted =1;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]> arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                isSorted =0;
                printf("Sort\n");
            }
        }
        if(isSorted){
            return;
        }
    }
}

void PrintArray(int *arr, int n){

    for(int index=0; index<n; index++){
        printf("%d ", arr[index]);
    }
}

int main()
{
    int arr[] = {111,82,63,14,5,3};
    BubbleSort(arr,6);
    PrintArray(arr, 6);
    return 0;
}

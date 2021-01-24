#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

void build_max_heap(int heap_size)
{
    for(int i = heap_size/2-1; i>= 0; i--)
    {
        max_heapify(i, heap_size);
    }
}

void heap_sort(int heap_size)
{
    for (int i = heap_size-1; i>= 0; i--)
    {
        int temp = heap[i];
        heap[i] = heap[0];
        heap[0] = temp;

        heap_size-=1;
        max_heapify(0, heap_size-1);
    }
}

int main()
{
    int heap_size = 20;
    //Print all the elements into the array
    print(heap_size);
    //Build a max-heap
    build_max_heap(heap_size);
    //Sorting
    heap_sort(heap_size);
    print(heap_size);
    return 0;
}

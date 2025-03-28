#include<stdio.h>
#include<stdlib.h>
#include"header.h"


int main()
{
    int arr[MAX_ARRSIZE] = {0}; 
    int N, i, newEl, position;
    newEl = position = 0;  

    printf("Enter the number of elements: "); 
    scanf("%d", &N); 

    printf("Enter the array elements: "); 
    for ( i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]); 
    }
    

    printArray(arr, N); 

    //inserting a new element
    printf("Enter the el you want to insert and the position: "); 
    scanf("%d %d", &newEl, &position); 
    printf("You entered el value %d and position %d\n", newEl, position); 

    //checking position boudary
    if(position > N + 1 || position < 0)
    {
        printf("Enter a valid positioin between 1 and %d", N); 
    }

    //Make room for the new element 
    for(i = N; i >= position; i--)
    {
        arr[i] = arr[i-1]; 
    }

    //Insert the new element on position
    arr[position - 1] = newEl; 
    N++; 
    //print new array
    printArray(arr, N); 

    return 0; 
}

void printArray(sint32 arr[], uint16 size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]); 
    }
    printf("\n"); 
}

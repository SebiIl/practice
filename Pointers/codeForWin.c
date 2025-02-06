#include <stdio.h>
void swap(int *a, int *b);
void printArray(int *arr, int size);

//DEFINES Area 
#define ARRSIZE 100


int main()
{
    int arr[ARRSIZE] = {0};
    int copyArr[ARRSIZE] = {0};
    int N, i; 
    int *ptrOriginal = arr; 
    int *ptrCopy = copyArr;

    printf("Enter the size of the array: ");; 
    scanf("%d", &N);

    
    //check  array boundary
    if ((N > ARRSIZE) || (N < 0))
    {
        printf("Array size is out of bound\n");
        return 0;
    }
    else
    {
        printf("Array size is within bound\n");
    }

    printf("Enter elements in array: \n"); 
    for (i = 0; i < N; i++)
    {
        scanf("%d", ptrOriginal); 
        //increment pointer to next element in array
        ptrOriginal++;
    }
    
    ptrOriginal = arr; //reset pointer to start of array

    //print the array usinng pointer
    for (i = 0; i < N; i++)
    {
        printf("%d ", *ptrOriginal);
        ptrOriginal++; 
    }
    printf("\n");

    //copy the array

    for(i = 0; i < N; i++)
    {
        *ptrCopy = *ptrOriginal;
        printf("copyArr[%d] = %d\n", i, *ptrCopy);  
        ptrCopy++;
    }
    



    return 0;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int *arr, int size)
{
    int i; 

    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
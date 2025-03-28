#include<stdio.h>
////#include "header.h"

#define MAX_SIZE 1000 // Maximum array size

int main()
{
    int arr[MAX_SIZE] = {0}, arrCopy[MAX_SIZE] = {0};
    //am nevoie de o variabila pentru a parcurge array ul si de o variabila pentru a retine dimensiunea array ului
    int size, i;

    //introducem dimensiunea array ului
    printf("Enter size of the array (1-1000): ");
    scanf("%d", &size);

    //introducem elementele array ului
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    //copiem array ul
    for(i = 0; i<size; i++)
    {
        arrCopy[i] = arr[i];    
    }

    //printam array ul
    printf("Array OG: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    //printam array ul copiat
    printf("Copy: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arrCopy[i]);
    }

     //crestearea arrayului cu un element 
size++;


    return 0; 
}
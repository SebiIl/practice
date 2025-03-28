#include <stdio.h>

#define ARRSIZE 10
#define NOOFATTEMPTS 3

void printArr(int arr[], int size);

int main()
{
    int arr[ARRSIZE] = {0};
    int size, newEl, newElPos, elDeletePos;
    int positionFlag = 0; // Inițializăm variabila

    // Enter array size and elements
    printf("Enter the size of the array and its elements: ");
    scanf("%d", &size);

    if (size > ARRSIZE || size < 0)
    {
        printf("Invalid size!\n");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n"); 

    printf("Array before insertion: ");
    printArr(arr, size);

    if (size >= ARRSIZE)
    {
        printf("Array is full, cannot insert new element.\n");
        return 1;
    }

    // User enters new element and position
    printf("Enter new element value and the position: ");
    while (positionFlag < NOOFATTEMPTS)
    {
        scanf("%d %d", &newEl, &newElPos);

        if (newElPos >= 1 && newElPos <= size + 1)
        {
            break; // Poziție validă, ieșim din buclă
        }
        else
        {
            positionFlag++; // Incrementează doar la poziție greșită
            if (positionFlag < NOOFATTEMPTS)
            {
                printf("Invalid position, please enter again: ");
            }
        }
    }

    // Dacă s-au epuizat încercările, ieșim din program
    if (positionFlag == NOOFATTEMPTS)
    {
        printf("Too many invalid attempts. Exiting...\n");
        return 1;
    }

    // Shift elements to make space for the new element
    for (int i = size; i >= newElPos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new element and update size
    arr[newElPos - 1] = newEl;
    size++;

    printf("Array after insertion: ");
    printArr(arr, size);

    return 0;
}

void printArr(int arr[], int size)
{
    printf("Arr Elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Adăugăm newline pentru format corect
}

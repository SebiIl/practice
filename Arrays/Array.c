#include <stdio.h>
#include "header.h"

int main()
{

    sint32 arr[MAX_ARRSIZE] = {0}, arrCopy[MAX_ARRSIZE] = {0};
    uint16 N;
    sint32 sum = 0, maxEl, minEl, oddSum, evenSum, maxEl2,
           evenCounter, oddCounter;
    maxEl = minEl = arr[0];                          // initialize max and min element to first element of array
    oddSum = evenSum = evenCounter = oddCounter = 0; // initialize the sum of odd and even numbers to 0
    maxEl2 = 0;                                      // initialize the second largest number to 0

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    printf("Enter the elements of the array: \n");
    for (uint16 i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    // copy the array
    for (uint16 i = 0; i < N; i++)
    {
        arrCopy[i] = arr[i];
    }

    // print the array
    printArray(arr, N);
    printArray(arrCopy, N);

    // print all negative numbers
    for (uint16 i = 0; i < N; i++)
    {
        if (arr[i] < 0)
        {
            printf("Array element is negative: %d\n", arr[i]);
        }
    }

    // print the sum of all elements in the array;
    for (uint16 i = 0; i < N; i++)
    {
        // sum of the array
        sum += arr[i];

        // check for max element
        if (arr[i] > maxEl)
        {
            maxEl2 = maxEl; // assign the max element to the second largest element, whis is 0 at the moment
            maxEl = arr[i]; // assign the new max element
        }
        else if (arr[i] > maxEl2 && arr[i] != maxEl)
        {
            maxEl2 = arr[i]; //update only if the element is greater than the max element and not equal to the max element
        }
        else
        {
            /* nothing to do */
        }

        // check for min element
        if (arr[i] < minEl)
        {
            minEl = arr[i];
        }

        // calculate the sum of the odd and even numbers
        if (arr[i] % 2 == 0)
        {
            evenSum += arr[i];
            evenCounter++;
        }
        else
        {
            oddSum += arr[i];
            oddCounter++;
        }

        // find second largest no in the array
    }
    printf("Sum of all elements in the array is: %d\nMax el = %d\nMin el = %d\nOdd numbers sum: %d\nEven numbers sum = %d\n", sum, maxEl, minEl, oddSum, evenSum);
    printf("Second largest element: %d\nNo of odd numbers = %d\nNo of even numbers = %d\n", maxEl2, oddCounter, evenCounter);

    return 0;
}

void printArray(uint32 arr[], uint32 size)
{
    // size is already passed as a parameter, no need to recalculate
    uint8 i;

    if (size > MAX_ARRSIZE)
    {
        printf("Array size is out of bound\n");
        return;
    }
    else
    {
        printf("Array size is within bound\n");
    }

    for (i = 0; i < size; i++)
    {
        printf("%d \n", arr[i]);
    }
}
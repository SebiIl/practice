#include <stdio.h>
#include <limits.h> // For INT_MIN

#define MAX_SIZE 1000 // Maximum array size

int main()
{
    int arr[MAX_SIZE], size, i;
    int oddCunter, evenCounter;

    /* Input size of the array */
    printf("Enter size of the array (1-1000): ");
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter element: \n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    oddCunter = evenCounter = 0;

    for ( i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCounter++;
        }
        else
        {
            oddCunter++;
        }
    }

    printf("Number of even elements: %d\n", evenCounter);
    printf("Number of odd elements: %d\n", oddCunter);


    

    return 0;
}
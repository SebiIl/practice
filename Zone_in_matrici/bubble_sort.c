#include <stdio.h>

#define SIZE 10

void bubble_sort(int a[], int size);

int main()
{
    int a[SIZE] = {1, 4, 7, 2, 8, 9, 5, 3, 0, 6}; 

    bubble_sort(a, SIZE); 

    for (int i = 0; i < SIZE; i++)
    {
        printf("a[%d] = %d\n", i, a[i]); 
    }

    return 0;
}

void bubble_sort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1]; 
                a[j + 1] = temp; 
            }
        }
    }
}
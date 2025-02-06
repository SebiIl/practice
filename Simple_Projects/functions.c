#include <stdio.h>
#include "header.h"

void decToBin(int nr)
{
    int result[8], i;

    /*Calculate binary output*/
    for (i = 0; nr > 0; i++)
    {
        result[i] = nr % 2;
        nr = nr / 2;
    }

    /*Print binary output*/
    printf("Bianry = ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", result[i]);
    }
}

void decToOct(int nr)
{
    
}
#include<stdio.h>
#include"functions.c"
#include"header.h"

int main()
{
    int nr; 

    printf("Enter the number you want to convert: "); 
    scanf("%d", &nr);
    /*Calling the function*/
    decToBin(nr); 

    return 0; 
}
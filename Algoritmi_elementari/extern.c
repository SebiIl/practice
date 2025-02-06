#include<stdio.h>
#include"extern.h"

extern int number; 

int main()
{
    print(); 

    return 0; 
}


void print()
{
    printf("Number is: %d", number); 
}
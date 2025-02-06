#include <stdio.h>
#include <string.h>

void swap(int *a, int *b)
{
    int temp  = *a; 
    *a = *b;
    *b = temp; 
}

int sumOfArray(int *arr, int size)
{
    int sum, i; 
    sum = 0; 

    for ( i = 0; i < size; i++)
    {
        sum += *(arr + i); 
    }
    
    return sum; 
}

void reverseString(char *str)
{
   int length = strlen(str); 
   char *start = str; 
   char *end = str + length - 1; 

   while (start < end)
   {
    char temp = *start; 
    *start = *end; 
    *end = temp; 
    start++; 
    end--; 
   }
   
}

int power(int m, int n)
{
    int result, i; 

    for(i = 0; i < n; i++)
    {
        result = m * n; 
        m = result; 
    }
    return result; 
}

int main()
{
    int x= 5, y = 7; 
    printf("Inainte de swap: %d, %d\n", x, y); 

    /*Swap test*/
    swap(&x, &y); 
    printf("Dupa swap: %d, %d\n", x, y);

    /*Sum of array test*/
    int arr[] = {1, 2, 3, 4, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    printf("Suma arr este: %d\n", sumOfArray(arr, size));

    /*Reverse string*/
    char str[] = "hello"; 
    printf("Before reversing: %s\n", str); 
    reverseString(str); 
    printf("After reversing: %s\n", str); 

    /*exponent*/
    printf("Exponent: %d", power(2,5)); 

    return 0; 
}
#include<stdio.h>


int main()
{   
    int arr[10], size; 

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &size); 

    printf("Input %d number of elements in the array: \n", size); 
    for (int i = 0; i < size; i++)
    {   
        printf("element %d: ", i); 
        scanf("%d", &arr[i]); 
    }

    printf("Expected output: \nThe elements you entered:\n"); 
    for (int i = 0; i < size; i++)
    {
        printf("element - %d: %d\n", i, *(arr + i)); 
    }
    

    return 0;    
}


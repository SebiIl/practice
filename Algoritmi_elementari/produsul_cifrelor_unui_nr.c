#include<stdio.h>

int main()
{
    int nr, prod; 
    prod = 1; 

    printf("Introduceti nr: "); 
    scanf("%d", &nr);

    while (nr != 0)
    {
        prod = prod * (nr % 10);
        nr = nr / 10; 
    }
    
    printf("Produsul este: %d\n", prod); 

    return 0; 
}
#include<stdio.h>

int main()
{
    int nr, invers, nr_init;

    printf("Intorduceti nr: "); 
    scanf("%d", &nr); 
    nr_init = nr; 

    while (nr != 0)
    {
        invers = nr % 10 + invers * 10; 
        nr = nr / 10; 
    }
    
    printf("Inversul lui %d este %d. \n", nr_init, invers); 

    return 0; 
}
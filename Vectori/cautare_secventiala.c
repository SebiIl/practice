#include<stdio.h>

int main()
{
    int vec[100], n, gasit, i, j, x; 
    gasit = 0; 

    //introducere elemente in vector
    printf("Nr de elem ale vectorului: "); 
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &vec[i]); 
    }
    //cautare valoare 
    printf("Ce nr doriti sa cautati?  "); 
    scanf("%d", &x); 

    //verificare
    for(i = 0; i < n; i++)
    {
        if(vec[i] == x)
        {
            gasit = 1; 
        }
    }

    if(gasit == 1)
    {
        printf("Element gasit"); 
    }
    else
    {
        printf("Elementul nu este in vector"); 
    }

    return 0; 
}
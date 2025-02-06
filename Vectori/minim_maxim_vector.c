#include <stdio.h>

void afisareVector(int v[], int size)
{
    int i; 
    for(i = 0; i < size; i++)
    {
        printf("%d ", v[i]); 
    }
}

int main()
{   
    //introducere vector si nr de elemente
    int v[100], nr_elemente, i, max, min; 
    printf("nr de elemente: "); 
    scanf("%d", &nr_elemente); 

    max = 0; 
    min = 9999; 

    //introducere elemente in vector
    for ( i = 0; i < nr_elemente; i++)
    {
        scanf("%d", &v[i]); 
    }

    for ( i = 0; i < nr_elemente; i++)
    {
        if(v[i] > max)
        {
            max = v[i]; 
        }   
        if (v[i] < min)   
        {
            min = v[i]; 
        }
    }
    
    afisareVector(v, nr_elemente); 
    printf("\n"); 
    printf("Min = %d, Max = %d\n", min, max); 


    return 0; 
}
#include <stdio.h>

void afisareVector(int v[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", v[i]);
    }
}

int main()
{   
    int v[100], nr_elemente, i; 
    printf("Numărul de elemente: "); 
    scanf("%d", &nr_elemente); 

    // Introducere elemente în vector
    printf("Introduceți elementele vectorului: ");
    for (i = 0; i < nr_elemente; i++)
    {
        scanf("%d", &v[i]); 
    }

    // Crearea unui nou loc
    nr_elemente += 1; 

    // Mutare elemente la dreapta
    for (i = nr_elemente - 1; i > 0; i--)
    {
        v[i] = v[i - 1]; // Mutare elemente la dreapta pentru a face loc noului element
    }

    // Inserare element nou
    printf("Introduceți noul element: ");
    scanf("%d", &v[0]); // Inserare nou element la începutul vectorului
    
    // Afișare vector
    afisareVector(v, nr_elemente); 
    printf("\n"); 

    return 0; 
}

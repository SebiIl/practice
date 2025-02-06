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
    int v[100], nr_elemente, i, size_Vector; 
    printf("nr de elemente: "); 
    scanf("%d", &nr_elemente); 

    //introducere elemente in vector
    for ( i = 0; i < nr_elemente; i++)
    {
        scanf("%d", &v[i]); 
    }

    
    //sortare folosind bubble sort
    int sortat, aux;

    do
    {
        sortat = 1; 
        for(i = 0; i < nr_elemente - 1; i++)
        {
            if(v[i] > v[i+1])       //verificare daca elementul acutal, v[0] > v[1]
            {
                aux = v[i];         //daca e mai mare, se memoreaza valoarea lui v[0] in aux
                v[i] = v[i+1];      //in pozitia 0 se memoreaza valoarea mai mare de pe pozitia 1 
                v[i+1] = aux;       //iar pe pozitia v1 se pune valoarea de pe v0 care era mai mare 
                sortat = 0;         //flag pentru a semnala ca sortarea s a realizat
            }
        }

    } while (sortat == 0);
    
    afisareVector(v, nr_elemente); 


    return 0; 
}
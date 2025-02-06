#include <stdio.h>

/*
    Aceasta tehnica se foloseste de o variabila auxiliara(desori numita aux)
    Avem nevoie de 2 for uri pentru a parcurge vectorul si a compara fiecare element cu restul celor din vector
*/

int main()
{
    int v[100], n, i, j, aux;

    // introducere n de la tastatura
    printf("Cate elemente are vectorul? ");
    scanf("%d", &n);

    // inserare elemente vector
    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    // sortare prin interschimbare
    /*primul for pe care l vom folosi ca sa luam primul element*/
    for (i = 0; i < n; i++)
    {
        /*al doilea for care porneste de la val i+1, adica urmatorul element cu care l vom compara*/
        for (j = i + 1; j < n; j++)
        {
            /*daca primul element este mai mare ca urmatorul se realizeaza interschimbarea si compararea continua
              daca nu, interschimbarea nu va avea loc
            */
            if (v[i] > v[j])
            {
                aux = v[i]; 
                v[i] = v[j]; 
                v[j] = aux; 
            }
        }
    }
    printf("Vector sortat: "); 
    for ( i = 0; i < n; i++)
    {
        printf("%d ", v[i]); 
    }
    

    return 0;
}
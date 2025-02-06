#include<stdio.h>

int nr_prim(int nr);
int descompunere_factori_primi(int nr); 

int main()
{
    int number; 
    printf("Introduceti nr: "); 
    scanf("%d", &number);
    nr_prim(number); 
    descompunere_factori_primi(number); 

    return 0; 
}

/*
    Un numar prim este acela care se imparte doar la 1 si la el insasi, adica are divizori improprii = {1; n}
    Pentru a rezolva aceasta problema, ne vom folosi de divizorii proprii, adica div proprii = {2, n/2}
        -folosim n/2 deoarece impartirea la jumatatea superioara a oricarui nr natural nu va fi egala cu 0
*/

int nr_prim(int nr)
{
    int div, nr_divizori; 
    nr_divizori = 0; 

    for(div = 2; div <= nr/2; div++)    //se pune conditia pentru divizori proprii
    {
        if(nr % div == 0)               //se verifica daca ne se imparte exact 
        {
            nr_divizori++;              //daca conditia de mai sus este adevarata, se incrementeaza var nr_divizori
        }
    }

    if(nr_divizori == 0)                //se verifica daca var a fost incrementata, ca nr sa fie prim, nr in cauza nu tb sa aiba div proprii
    {
        printf("Nr este prim\n"); 
    }
    else
    {
        printf("Nr nu este prim\n");
    }

    return 0; 
}

int descompunere_factori_primi(int nr)
{
    int d, p; 

    d = 2;

    while(nr > 1)
    {
        p = 0; 
        while (nr % d == 0)
        {
            p++;
            nr /= d; 
        }

        if(p > 0 )
        {
            printf("%d^%d ", d, p);
        }
        d += 1;
    }
    return 0; 
}
#include<stdio.h>

int eliminare_prima_cifra(int nr);

int main()
{
    int nr = 1234; 
    /*  
        cheia este la conditia din while
        iar pentru a elimia un numar, trebuie sa folosim op /
        este esential ca nr sa fie de tip intreg
    */
    while (nr > 9)
    {
        nr = nr/10; 
    }
    
    printf("nr este: %d\n", nr); 
    printf("nr fara prima cifra este: %d\n", eliminare_prima_cifra(nr)); 


    return 0; 
}

int eliminare_prima_cifra(int nr)
{
    int increment, copie;
    copie = nr;  

    while (nr > 9)
    {
        increment = increment * 10; 
        nr = nr /10; 
    }
    return copie/increment; 
}
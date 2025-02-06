#include <stdio.h>

void palindrom(int nr); 

int main()
{
    int number; 
    printf("Introduceti nr: "); 
    scanf("%d", &number); 
    
    palindrom(number); 

    return 0;
}

void palindrom(int nr)
{
    int invers, nrInit; 

    nrInit = nr;    //salvez nr initial 

    while (nr != 0)
    {
        invers = invers * 10 + nr % 10; //consturiesc inversul 
        nr /= 10;   //tai ultiuma cifra
    }

    if(nrInit == invers)
    {
        printf("nr este palindrom"); 
    }
    else
    {
        printf("nr nu este palindrom"); 
    }
} 
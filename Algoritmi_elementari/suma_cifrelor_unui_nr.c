#include"stdio.h"

int main()
{
    int nr, suma;

    suma = 0; 

    printf("Introduceti nr: "); 
    scanf("%d", &nr); 

 

    while (nr != 0)
    {
        suma = suma + nr % 10; 
        nr = nr /10; 
    }
    printf("Suma este: %d\n", suma); 

    return 0; 
}
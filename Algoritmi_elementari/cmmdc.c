#include<stdio.h>

int cmmdc(int nr1, int nr2); 
int cmmmc(int nr1, int nr2); 

int main()
{
    printf("Program pentru cel mai mare divizor comun\n"); 
    int nr1, nr2; 
    printf("Introduceti nr: "); 
    scanf("%d %d", &nr1, &nr2); 
    printf("CMMDC este: %d\n", cmmdc(nr1, nr2));
    printf("CMMMC este: %d\n", cmmmc(nr1, nr2));

    return 0; 
}

int cmmdc(int nr1, int nr2)
{

    while (nr1 != nr2)
    {
        if(nr1 > nr2)
        {
            nr1 = nr1 - nr2; 
        }
        else
        {
            nr2 = nr2 - nr1; 
        }
    }

    return nr1; 
}

/*
    Pentru cel ma mic multiplu comun este esential sa stii formula: cmmmc = produsul dintre cele 2 nr imparitit la cmmdc, adica
    cmmmc = a*b/cmmdc
    Deci mai intai se afla cel mai mare divizor comun folosind metoda scaderilor repetate, apoi se aplica formula
*/

int cmmmc(int nr1, int nr2)
{
    int rezultat; 
    
    rezultat = (nr1 * nr2) / cmmdc(nr1, nr2);

    return rezultat; 
}
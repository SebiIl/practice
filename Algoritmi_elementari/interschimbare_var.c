#include<stdio.h>

int interschimbare(int a, int b);

int main()
{
    int a, b; 
    printf("Introduceti var: "); 
    scanf("%d %d", &a, &b); 

    printf("Valori initiale a si b:         %d, %d\n", a, b);
    interschimbare(a, b); 

    return 0; 
}

/*
    Secretul consta adugarea unei variabile auxiliare, care sa tina temporar valoarea var a, care apoi i se va asigba val var b

*/

int interschimbare(int a, int b)
{
    int aux; 
    aux = a; 
    a = b; 
    b = aux; 

    printf("Valori interschimbate  a si b:  %d, %d", a, b); 

    return 0; 
}
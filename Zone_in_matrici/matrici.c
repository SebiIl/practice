#include <stdio.h>

#define ROWS 3
#define COLS 3

int main()
{
    int i, j;
    int sum = 0; 
    int a[ROWS][COLS];

    // citire de la tastatura
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // afisare matrice
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // afisare element de pe coloana principala
    printf("Elemente diag principala: "); 
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j]; 
                printf("%d ", a[i][j]); 
            }
        }
    }
    printf(" Suma = %d\n", sum); 

    //afisare elemente de pe diagonala secundara
    printf("Elemente diag secundara: "); 
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (i + j == ROWS - 1)
            {
                printf("%d ", a[i][j]); 
            }
        }
    }
    printf("\n");

    //afisare elemente de sub diagonala principala
    printf("Elemente de sub diag principala: "); 
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (i > j)
            {
                printf("%d ", a[i][j]); 
            }
        }
    }
    printf("\n");

    //afisare elemente de deasupra diagonala principala
    printf("Elemente de deasupra diagonala principala: "); 
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (i < j)
            {
                printf("%d ", a[i][j]); 
            }
        }
    }
    printf("\n");
    
    //afisare elemente de deasupra diagonala secundara
    printf("Elemente de deasupra diagonala secundara: "); 
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (i + j < COLS - 1)
            {
                printf("%d ", a[i][j]); 
            }
        }
    }
    printf("\n");

    //afisare elemente de sub diagonala secundara
    printf("Elemente de sub diagonala secundara: "); 
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (i + j > COLS - 1)
            {
                printf("%d ", a[i][j]); 
            }
        }
    }
    printf("\n");

    return 0;
}
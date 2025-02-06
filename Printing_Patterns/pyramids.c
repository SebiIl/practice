#include<stdio.h>

int main()
{
    //jumatate de piramida 
    int i, j, rows; 
    printf("Enter the number of rows: "); 
    scanf("%d", &rows); 

    /*half of pyramid with numbers or special charaters*/
    /*
    for(i = 1; i<= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j); //here you can change the desired output(either numbers or chars)
        }
        printf("\n"); 
    }
    */

   //printing a pyramid of alphabet letters
    for(i = 1; i<= rows; i++)
    {
        char letter = 'A' + (i - 1); 
        for(j = 1; j <= i; j++)
        {
            
            printf("%c ", letter); 
        }
        printf("\n"); 
    }




    return 0; 
}
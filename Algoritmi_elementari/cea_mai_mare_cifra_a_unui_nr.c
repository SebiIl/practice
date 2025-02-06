#include<stdio.h>

int main()
{
    int nr, max, rest; 

    max = 0; 
    printf("Introduceti nr: "); 
    scanf("%d", &nr); 

    while (nr != 0)
    {
        rest = nr % 10; 

        if(rest > max)
        {
            max = rest; 
        }

        nr = nr /10; 
    }

    printf("Cea mai mare cifra este: %d", max); 
    
    return 0; 
}
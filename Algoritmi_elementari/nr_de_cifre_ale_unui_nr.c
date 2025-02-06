#include "stdio.h"

int main()
{
    int nr, nr_cifre;

    printf("Introduceti nr: ");
    scanf("%d", &nr);

    nr_cifre = 0;

    //testam daca nr este 0, daca nu mergem mai departe
    if (nr == 0)
    {
        nr_cifre++;
    }
    else
    {
        while (nr != 0)
        {
            nr_cifre++;

            nr /= 10;
        }
    }

    printf("Numarul este alcatuit din %d cifre\n", nr_cifre);

    return 0;
}
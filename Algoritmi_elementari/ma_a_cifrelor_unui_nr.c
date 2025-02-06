#include"stdio.h"

int main()
{
    int nr, suma, counter;
    float ma; 

    suma = 0; 
    counter = 0; 
    ma = 0; 

    printf("Introduceti nr: "); 
    scanf("%d", &nr); 

    while (nr != 0)
    {   
        suma = suma + nr % 10;  //se adauga cifrele numarului in suma pe rand
        counter++;              //se numara cate cifre sunt in numar
        nr /= 10;               //se taie cifra folosita din numar
    }
    
    ma = (float)suma / counter; //se calculeaza media aritmetica
    printf("Media aritmetica este: %f\n", ma);

    return 0; 
}
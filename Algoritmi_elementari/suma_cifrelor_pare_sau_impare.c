#include"stdio.h"

int main()
{   
    //am facut si produsul pentru algoritmii 8 si 9 
    int nr, sumaPar, sumaImpar, verificareCifra, produsPar, produsImpar;

    sumaPar = 0;
    sumaImpar = 0;  
    verificareCifra = 0; 
    produsPar = 1; 
    produsImpar = 1;

    printf("Introduceti nr: "); 
    scanf("%d", &nr); 


    while (nr != 0)
    {
      verificareCifra = nr  % 10; 
      if(verificareCifra % 2 == 0)
      {
        sumaPar += verificareCifra;     //calculare suma
        produsPar *= verificareCifra;   //calculare produs
      }
      else
      {
        sumaImpar += verificareCifra; 
        produsImpar *= verificareCifra; 
      }

      nr = nr / 10; 
    }
    printf("Suma para si produsul este: %d si %d\n", sumaPar, produsPar);
    printf("Suma impara si produsul este: %d si %d\n", sumaImpar, produsImpar); 

    return 0; 
}
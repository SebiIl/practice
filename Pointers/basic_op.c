#include<stdio.h>

int main()
{
    /*
    -pointerul in esenta este un tip de date care este capabil sa memoreze o locatie(adresa) din memorie, 
    sau valoarea adresei din memorie a unei alte variabile 

    -prin operatorul de referentiere care este &, se asigneaza unei variabile de tip pointer adresa unei alte variabie(care nu este de tip pointer). 
    -prin operatorul de dereferentiere care este *, se asigneaza unei var. de tip pointer valoarea variabilei

    Syntaxa: dataype *nume; 
    Decalararea: int *ptr; (in declarare se foloseste operatorul * si nu se asigneaza o val. var. de tip pointer)
    Initilizarea: int var = 10; 
                  int *ptr; 
                  ptr = &var; 
        ->in procesul de initializare, se asigneaza pentru prima data o valoare variabilei de tip pointer;
          in general, variabilei de tip pointer i se asigneaza adresa de memorie a unei variabile prin operatorul &
    Definirea pointerului sau Pointer Definition = declararea + initializare => int *ptr = &var;    
    */

    //declarare var
    int var = 10; 
    //declarare pointer
    int *ptr; 
    //referentiere la adresa var catre pointer
    ptr = &var; //&care este operatorul de referentiere asigneaza var ptr adresa la care se afla variabila var
    

    //printare valoarea adresei lui ptr 
    printf("Valoare adresei pointerului este: %p \n", ptr); 
    //printare valoarea variabile var
    printf("Valoare variabilei var este: %d \n", var);
    //printare valoarea pointerrului ptr a carui valoare este reprezentata de variabila var
    printf("Valoare pointerului *ptr este : %d \n", *ptr);

    return 0; 
}
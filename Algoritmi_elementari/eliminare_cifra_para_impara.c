#include<stdio.h>

int eliminare_nr_par(int nr); 

/*
    Diferenta intre functii de tip void si int/float/double etc
    void nume_fc(arg) => se numeste functie PROCEDURALA, adica nu transmite nicio valoare inapoi in main
    int nume_fc(arg)  => se numeste functie OPERAND, adica ea la finalul ei transmite o valoare inpoi in main care poate fi utilizata

    Spre ex, cum am folosit eu in acest program fc de tip int eliminare_nr_par(int nr), care la finalul ei returneaza cifrele pare;
    returnand aceasta valoare, am putut folosi functia ca operand in program ca sa printez numerele
    De retinut:
        -fc de tip operand se pot folosi in expresii;
        -se pot atribui variabilelor 
        -valorile pe care acestea le returneaza sunt vizibile in main

    Daca aveam o fc de tip void, nu o puteam folosi in acelasi mod, mai intai trebuia apelata individual si pentru a putea vedea ce valori
    sunt in aceasta, trebuie sa printam in interiorul functiei, deoarece in main nu va fi disponibila aceasta informatie
    Totdata compilatorul va da o eroare de tipul "no match for operator ..."
    De retinut: 
        -fc de tip procedurale(void) nu pot fi folosite in expresii si nu se pot atribui var;
        -valorile sunt disponibile doar in interiorul functiei, deci nu sunt disponibile in main; 
*/

int main()
{   
    int number; 
    printf("Introduceti nr: "); 
    scanf("%d", &number); 

    printf("nr = %d", eliminare_nr_par(number)); 

    return 0; 
}

/*
    Pentru aceasta functie avem nevoie de 3 var, numarul care trebuie verificat, o var in care sa memoram nr pare/impare si o var cu care
    sa construim numarul la stanga, in cazul nostru p, care este inmultit la fiecare pas cu 10; 

    Pentru a elimina cifrele pare, se face verificarea cu ultima cifra a nr, daca aceasta este egala cu 0 => cifra este para, iar pentru
    verificarea daca cifra este impara, se face verificarea daca restul impartirii la 2 este 1;   
*/
int eliminare_nr_par(int nr)
{
    int eliminare_par, p;
    p = 1; //il vom folosi pentru a adauga nr la stanga, va fi inmultiti cu 10 la fiecare pas din loop  

    while (nr != 0) //nr trebuie sa fie dif de zero 
    {
        if(nr % 2 == 0)  //verificare daca ultima cifra din nr este para sau nu
        {
            eliminare_par = (nr % 10) * p + eliminare_par; //se construieste nr prin adaugarea ultimei cifre, daca este para si se aduna cu val anterioare(initial =0)
            p *= 10; 
        }
        nr = nr / 10;  
    }

    if(p == 1)
    {
        printf("Nr are numai cifre pare! \n"); 
    }
    else
    {
        return eliminare_par; 
    }
}
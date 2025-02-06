#include<stdio.h>

int inlocuire(int nr); 

int main()
{   
    int number; 
    printf("Introduceti nr: "); 
    scanf("%d", &number); 

    printf("Inlocuirea este: %d \n", inlocuire(number));  

    return 0; 
}

/*
    Algoritm: 
    1. Avem nevoie de 4 var: 
        - una sa memoreze ultima cifra
        - una care sa tina numarul
        - una pentru o copie de numar
        - una pentru constructia numarului (construct in cazul nostru)
    2. Se creeaza o copie a numarului 
    3. Se calculeaza ultima cifra a numarului cu operatorul % si se initializeaza var construct
    4. Se afla ultima cifra si calculeaza var construct inmultind o cu 10 in fiecare ciclu 
    5. Se construieste numarul astfel: 
        - se construieste corpul inmultind cu construct ultima cifra(ultima cifra devine prima)
        - apoi se aduna cu corpul numarului initial, care se obtine din copie_nr % construct, care ne da corpul fara prima cifra
        - dupa ce se aduna aceste 2 artificii, scapam de prima cifra impartind totul la 10, iar apoi inmultim cu 10 pt a recurea pozitia
        - in final la tot numarul se aduna prima cifra care devine ultima
*/

int inlocuire(int nr)
{
    int ultima_cifra, construct, copie_nr; 

    copie_nr = nr; 
    ultima_cifra = nr % 10;
    construct = 1;  

    while (nr > 9)
    {
        nr = nr / 10; 
        construct = construct * 10; 
    }
    
    copie_nr = ((ultima_cifra * construct + copie_nr % construct) / 10) * 10 + nr; 


    return copie_nr; 
}
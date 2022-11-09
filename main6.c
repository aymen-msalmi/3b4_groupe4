#include <stdio.h>
#include <string.h>
#include"gesrec.h"
int ajouter(char *, Reclamation );
int modifier( char *, int, Reclamation);
int supprimer(char *, int );
Reclamation chercher(char *, int);

int main()
{
    Reclamation r1= {"Baccar","Fedi",17,12,2022,270795,1014,"Corruption Financière","AaBbCc",2},r2= {"Bellil","Fatma",18,12,2022,270795,1015,"Conflit d'interet","DdEeFf",3},r3;
    int x=ajouter("Reclamation.txt", r1);

    x=modifier("Reclamation.txt",1014,r2 );

    if(x==1)
        printf("\nModification de Reclamation avec succés");
    else printf("\nechec Modification");
    x=supprimer("Reclamation.txt",1014 );
    if(x==1)
        printf("\nSuppression de Reclamation avec succés");
    else printf("\nechec Suppression");
    r3=chercher("Reclamation.txt",3);
    if(r3.idr==-1)
        printf("introuvable");
return 0;

}

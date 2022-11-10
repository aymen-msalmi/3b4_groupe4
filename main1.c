#include <stdio.h>
#include <string.h>
#include"ges_elec.h"

int ajouter(char *, Election );
int modifier( char *, int, Election);
int supprimer(char *, int );
Election chercher(char *, int);

int main()
{
    Election e1= {032002,"municipale",17,12,2022},e2= {032564,"Presidentielle",20,05,2025},e3;
    int x=ajouter("Election.txt",e1);
    /*
    if(x==1)
        printf("\najout d'election avec succés");
    else printf("\nechec ajout");
        */

    x=modifier("Election.txt",032002,e2 );
    if(x==1)
        printf("\nModification d'election avec succés");
    else printf("\nechec Modification");
    x=supprimer("Election.txt",032002 );
    if(x==1)
        printf("\nSuppression d'election avec succés");
    else printf("\nechec Suppression");
    e3=chercher("Election.txt",3 );
    if(e3.IdElection==-1)
        printf("introuvable");
    return 0;
}

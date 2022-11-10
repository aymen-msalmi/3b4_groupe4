#include <stdio.h>
#include <string.h>
#include"observateur.h"
int ajouter(char *, observateur );
int modifier( char *, int, observateur);
int supprimer(char *, int );
observateur chercher(char *, int);

int main()
{
    observateur o1= {"mimi","ch",31,05,1999,1456,1,"tunisien","journaliste"},o2= {"azzi","azizi",27,04,1999,1234,2,"algerien","interprète",},o3;
    int x=ajouter("observateur.txt", o1);
    /*
    if(x==1)
        printf("\najout d'observateur avec succés");
    else printf("\nechec ajout");
        */
    x=modifier("observateur.txt",1,o2 );

    if(x==1)
        printf("\nModification d'observateur avec succés");
    else printf("\nechec Modification");
    x=supprimer("observateur.txt",1 );
    if(x==1)
        printf("\nSuppression d'observateur avec succés");
    else printf("\nechec Suppression");
    o3=chercher("observateur.txt",3);
    if(o3.idf==-1)
        printf("introuvable");
return 0;
    
}

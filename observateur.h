#ifndef OBSERVATEUR_H_INCLUDED
#define OBSERVATEUR_H_INCLUDED
#include <stdio.h>
typedef struct 
{ 
    int  jour;
    int  moins;
    int  annee;		
}Date;
typedef struct
{
    char Nom [20];
    char Prenom [20];
    Date date;
    int  cin;
    int idf;
    char nationalite[20];
    char professione[20];

  
} observateur;

int ajouter(char *l_ob, observateur );
int modifier( char *l_ob, int, observateur);
int supprimer(char *l_ob, int );
observateur chercher(char *l_ob, int);



#endif // OBSERVATEUR_H_INCLUDED


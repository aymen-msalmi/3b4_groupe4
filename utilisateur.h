#ifndef utilisateur_H_INCLUDED
#define utilisateur_H_INCLUDED

#include <stdio.h>
typedef struct
{
    int jour;
    int mois;
    int annee;
} Date;
typedef struct
{
    char nom[20];
    char prenom[20];
    char sexe [20];
    int cin;
    Date date;
    int typeutilisateur;
} utilisateur;

int ajouter(char *, utilisateur );
int modifier( char *, int, utilisateur );
int supprimer(char *, int );
utilisateur chercher(char *, int);

#endif // POINT_H_INCLUDED

#ifndef GESREC_H_INCLUDED
#define GESREC_H_INCLUDED
#include <stdio.h>
typedef struct
{
    int  jour;
    int  mois;
    int  annee;
}Date;
typedef struct
{
    char Nom [20];
    char Prenom [20];
    Date date;
    int  IDliste;
    int idr;
    char objet[50];
    char contenu[1000];
    int deg_imp;

} Reclamation;

int ajouter(char *rec, Reclamation );
int modifier( char *rec, int, Reclamation);
int supprimer(char *rec, int );
Reclamation chercher(char *rec, int);


#endif // GESREC_H_INCLUDED

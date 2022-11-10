#ifndef GESTION_LISTE_ELECTORALE_H_INCLUDED
#define GESTION_LISTE_ELECTORALE_H_INCLUDED
#include <stdio.h>
#include<string.h>
typedef struct
{
    int jour;
    int mois;
    int annee;
}Date;
typedef struct
{
    char Nom[30];
    char Prenom[30];
    char sex; //h H pour homme f F pour femme
    int CIN;
    Date date;
}Candidat;

int ajouter(char *filename, Candidat Candidat1);
int modifier( char *filename, int CIN, Candidat Candidat2 );
int supprimer(char *filename, int CIN);
Candidat chercher(char *filename, int CIN);
#endif

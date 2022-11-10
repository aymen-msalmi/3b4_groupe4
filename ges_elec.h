#ifndef GE_H_INCLUDED
#define GE_H_INCLUDED
#include <stdio.h>
typedef struct
{ int jour;
  int mois;
  int annee;
}Date;
typedef struct
{
    int IdElection;
    Date dateElection;
    char TypeElection[50];
} Election;
int ajouter(char *elec, Election);
int modifier( char *elec, int, Election);
int supprimer(char *elec, int );
Election chercher(char *elec, int);

#endif // GE_H_INCLUDED

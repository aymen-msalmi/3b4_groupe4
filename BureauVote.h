#ifndef GESTION_DE_RECLAMATION_H_INCLUDED
#define GESTION_DE_RECLAMATION_H_INCLUDED
#include <stdio.h>
#include<string.h>

typedef struct
{
	int idbureau ;
	int idagent;
	char ville[30];
	char adresse[100];
	int capacitebureau ;
	int nombreobservateur ;
}bv;

int ajouter(char *filename, bv bv1);
int modifier( char *filename, int idbureau, bv bv2 );
int supprimer(char *filename, int idbureau);
bv chercher(char *filename, int idbureau);
#endif

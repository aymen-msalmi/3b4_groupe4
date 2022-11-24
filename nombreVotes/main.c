#include <stdio.h>
#include <stdlib.h>
#include "nombreVotes.h"

int main()
{
    Vote v1= {0,126},v2= {1255,136},v3= {1364,543};
    int nombre;
    int x=ajouter("votes.txt", v1);
    int y=ajouter("votes.txt", v2);
    int z=ajouter("votes.txt", v3);

    int idListe;
    idListe=1255;
    nombre=nombreVotes("votes.txt",&idListe);

    printf("le nombre de vote est %d",nombre);

    return 0;
}
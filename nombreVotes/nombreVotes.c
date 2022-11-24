#include "nombreVotes.h"
#include <stdio.h>

int ajouter(char * filename, Vote  vote1 )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
      fprintf(f,"%d %d \n",vote1.idListe,vote1.idBureau);
        fclose(f);
        return 1;
    }
    else return 0;
}

int nombreVotes(char *filename, int *idListe)
{
    int nbreVotes=0;
    Vote vote1;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
       
        while(fscanf(f,"%d %d",&vote1.idListe, &vote1.idBureau)!=EOF)
        {
            if (vote1.idListe==*idListe)
            {
                nbreVotes ++;
            }
        }
    }
    fclose(f);
    return nbreVotes;
}



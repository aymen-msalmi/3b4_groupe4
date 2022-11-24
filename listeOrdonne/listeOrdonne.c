#include<stdio.h>
#include "listeOrdonne.h"

void listeOrdonne( char * filename, int table[2][50])
{
    listeElectorale liste;
    int i=0;
    int j=0;
    int nombreListe=count(filename);
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
     {
        while(fscanf(f,"%d %d %d %d %d\n",&liste.idListe,&liste.idCandidat1,&liste.idCandidat2,&liste.idCandidat3,&liste.vote)!=EOF)
        {
                table[0][i]=liste.idListe;
                table[1][i]=liste.vote;
                i++;
        }
        int permut;
        int tempoL0=0,tempoL1=0;
        do
        {
            permut=0;
            for (i=0;i<nombreListe-1;i++)
            {
                if(table[1][i]<table[1][i+1])
                {
                    tempoL0=table[1][i];
                    table[1][i]=table[1][i+1];
                    table[1][i+1]=tempoL0;

                    tempoL1=table[0][i];
                    table[0][i]=table[0][i+1];
                    table[0][i+1]=tempoL1;
                    permut=1;
                }
            }

        }while(permut==1);
    }
        fclose(f);
}

    int count( char * filename)
{
        listeElectorale liste;
        int nombreListe=0;
        FILE * f=fopen(filename, "r");
            if(f!=NULL)
     {

        while(fscanf(f,"%d %d %d %d %d\n",&liste.idListe,&liste.idCandidat1,&liste.idCandidat2,&liste.idCandidat3,&liste.vote)!=EOF)
        {
            nombreListe++;
        }
     }
        return nombreListe;
}

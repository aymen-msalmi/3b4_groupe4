#include <stdio.h>
#include <stdlib.h>
#include "listeOrdonne.h"
void main()
{
        int table[2][50];
        int nombreListe=count("listeElectorale.txt");
        listeOrdonne( "listeElectorale.txt" , table);
        for (int j=0;j<nombreListe; j++)
            printf("id  = %d | nombre des votes = %d \n",table[0][j],table[1][j]);
}

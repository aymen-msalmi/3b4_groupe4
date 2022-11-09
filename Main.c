#include <stdio.h>
#include <string.h>
#include"BureauVote.h"
int main()
{
   bv bv1= {12672357,458,"ariana","ecole elghazela",2500,10},bv2= {11137279,676,"gabes","ecole elhidaya",1250,6},bv3={10572837,545,"gabes","ecole lahbib bourguiba",300,3};
   int x=ajouter("bv2.txt", bv1);
	 x=ajouter("bv2.txt", bv2);
//x=ajouter("bv2.txt", bv3);
    if(x==1)
        printf("\najout  du bureau de vote avec succés  ");
    else printf("\nechec ajout");
    x=modifier("bv2.txt",12479357,bv2);
    if(x==1)
        printf("\nModification du bureau de vote avec succés ");
    else printf("\nechec Modification");
    x=supprimer("bv2.txt",12479357);
    if(x==1)
        printf("\nSuppression du bureau de vote avec succés ");
    else printf("\nechec Suppression");
    bv3=chercher("bv2.txt",12479357 );
    if(bv3.idbureau==-1)
        printf("introuvable");
    return 0;
}

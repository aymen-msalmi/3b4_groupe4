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



// aymen work 

    Candidat Candidat1= {"mohamed","mm",'h',00223344,22,12,1980},candidat2= {"ali","benmohamed",'h',11445278,15,06,2000},candidat3;
    int x=ajouter("observateur.txt", Candidat1);

    x=modifier("listeElectoral.txt",00223344,candidat2 );

    if(x==1)
        printf("\nModification de la liste avec succés");
    else printf("\nechec Modification");
    x=supprimer("listeElectoral.txt",00223344 );
    if(x==1)
        printf("\nSuppression de la liste electroarle avec succés");
    else printf("\nechec Suppression");
    candidat3=chercher("listeElectoral.txt",34527868);
    if(candidat3.CIN==-1)
        printf("introuvable");
}

#include "gestion_liste_electorale.h"

int ajouter(char *filename, Candidat Candidat1)
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %c %d %d %d %d\n",Candidat1.Nom, Candidat1.Prenom, Candidat1.sex, Candidat1.CIN, Candidat1.date.jour,Candidat1.date.mois,Candidat1.date.jour);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char *filename, int CIN ,Candidat Candidat1 )
{
    int tr=0;
    Candidat candidat3 ;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("bv2.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %c %d %d %d %d\n",Candidat1.Nom, Candidat1.Prenom, &Candidat1.sex, &Candidat1.date.jour, &Candidat1.date.mois, &Candidat1.date.jour)!=EOF)
        {
            if(Candidat1.CIN==CIN)

               { fprintf(f,"%s %s %c %d %d %d %d\n",Candidat1.Nom,Candidat1.Prenom,Candidat1.sex,Candidat1.date.jour,Candidat1.date.mois,Candidat1.date.jour);
                tr=1;}

            else
                fprintf(f2,"%s %s %c %d %d %d %d\n",Candidat1.Nom,Candidat1.Prenom,Candidat1.sex,Candidat1.date.jour,Candidat1.date.mois,Candidat1.date.jour);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int CIN)
{
    int tr=0;
    Candidat Candidat1 ;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %c %d %d %d %d\n",Candidat1.Nom, Candidat1.Prenom, &Candidat1.sex, &Candidat1.CIN, &Candidat1.date.jour, &Candidat1.date.mois, &Candidat1.date.jour)!=EOF)
        {
            if(Candidat1.CIN==CIN)
                tr=1;
            else
                fprintf(f2,"%s %s %c %d %d %d %d\n",Candidat1.Nom,Candidat1.Prenom,Candidat1.sex,Candidat1.date.jour,Candidat1.date.mois,Candidat1.date.jour);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
Candidat chercher(char *filename, int CIN)
{
    Candidat Candidat1;
    int tr;
    FILE *f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%s %s %c %d %d %d %d\n",Candidat1.Nom, Candidat1.Prenom, &Candidat1.sex, &Candidat1.CIN ,&Candidat1.date.jour, &Candidat1.date.mois, &Candidat1.date.jour)!=EOF)
        {
            if(Candidat1.CIN== CIN)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        Candidat1.CIN=-1;
    return Candidat1;

}

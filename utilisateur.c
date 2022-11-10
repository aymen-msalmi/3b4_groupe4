#include "utilisateur.h"

int ajouter(char * filename, utilisateur u )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
 fprintf(f,"%s %s %s %d %d  %d  %d %d\n",u.nom,u.prenom,u.sexe,u.cin,u.date.jour,u.date.mois,u.date.annee,u.typeutilisateur);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int cin, utilisateur nouv )
{
    int tr=0;
    utilisateur u;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %s %d %d  %d  %d %d\n",u.nom,u.prenom,u.sexe,&u.cin,&u.date.jour,&u.date.mois,&u.date.annee,&u.typeutilisateur)!=EOF)
        {
            if(u.cin== cin)
            {

          fprintf(f2,"%s %s %s %d %d  %d  %d %d\n",nouv.nom,nouv.prenom,nouv.sexe,nouv.cin,nouv.date.jour,nouv.date.mois,nouv.date.annee,u.typeutilisateur);
                tr=1;
            }
            else
                fprintf(f2,"%s %s %s %d %d  %d  %d %d\n",u.nom,u.prenom,u.sexe,u.cin,u.date.jour,u.date.mois,u.date.annee,u.typeutilisateur);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int cin)
{
    int tr=0;
    utilisateur u;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %s %d %d  %d  %d %d\n",u.nom,u.prenom,u.sexe,&u.cin,&u.date.jour,&u.date.mois,&u.date.annee,&u.typeutilisateur)!=EOF)
        {
            if(u.cin== cin)
                tr=1;
            else
                fprintf(f2,"%s %s %s %d %d  %d  %d %d\n",u.nom,u.prenom,u.sexe,u.cin,u.date.jour,u.date.mois,u.date.annee,u.typeutilisateur);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
utilisateur chercher(char * filename, int cin)
{
   utilisateur u;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%s %s %s %d %d  %d  %d %d\n",u.nom,u.prenom,u.sexe,&u.cin,&u.date.jour,&u.date.mois,&u.date.annee,&u.typeutilisateur)!=EOF)
        {
            if(u.cin== cin)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        u.cin=-1;
    return u;

}

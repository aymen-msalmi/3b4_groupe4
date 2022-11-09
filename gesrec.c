#include "gesrec.h"

int ajouter(char * filename, Reclamation  r )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
      fprintf(f,"%s %s %d %d %d %d %d %s %s %d\n",r.Nom,r.Prenom,r.date.jour,r.date.mois,r.date.annee,r.IDliste,r.idr,r.objet,r.contenu,r.deg_imp);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int idr, Reclamation nouv )
{
    int tr=0;
    Reclamation r;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %d %d %d %d %d %s %s %d\n",r.Nom,r.Prenom,&r.date.jour,&r.date.mois,&r.date.annee,&r.IDliste,&r.idr,r.objet,r.contenu,&r.deg_imp)!=EOF)
        {
            if(r.idr== idr)
            {
                fprintf(f2,"%s %s %d %d %d %d %d %s %s %d\n",nouv.Nom,nouv.Prenom,nouv.date.jour,nouv.date.mois,nouv.date.annee,nouv.IDliste,nouv.idr,nouv.objet,nouv.contenu,nouv.deg_imp);
                tr=1;
            }
            else
                fprintf(f2,"%s %s %d %d %d %d %d %s %s %d\n",r.Nom,r.Prenom,r.date.jour,r.date.mois,r.date.annee,r.IDliste,r.idr,r.objet,r.contenu,r.deg_imp);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int idr)
{
    int tr=0;
    Reclamation r;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %d %d %d %d %d %s %s %d\n",r.Nom,r.Prenom,&r.date.jour,&r.date.mois,&r.date.annee,&r.IDliste,&r.idr,r.objet,r.contenu,&r.deg_imp)!=EOF)
        {
            if(r.idr== idr)
                tr=1;
            else
                fprintf(f2,"%s %s %d %d %d %d %d %s %s %d\n",r.Nom,r.Prenom,r.date.jour,r.date.mois,r.date.annee,r.IDliste,r.idr,r.objet,r.contenu,r.deg_imp);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
Reclamation chercher(char * filename, int idr)
{
    Reclamation r;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&&fscanf(f,"%s %s %d %d %d %d %d %s %s %d\n",r.Nom,r.Prenom,&r.date.jour,&r.date.mois,&r.date.annee,&r.IDliste,&r.idr,r.objet,r.contenu,&r.deg_imp)!=EOF)
        {
            if(r.idr== idr)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        r.idr=-1;
    return r;

}

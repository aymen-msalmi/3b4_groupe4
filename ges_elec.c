#include "ges_elec.h"

int ajouter(char * filename, Election e )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %d %d %d\n",e.IdElection,e.TypeElection,e.dateElection.jour,e.dateElection.mois,e.dateElection.annee);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int IdElection, Election nouv )
{
    int tr=0;
    Election e;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %d %d %d\n",&e.IdElection,e.TypeElection,&e.dateElection.jour,&e.dateElection.mois,&e.dateElection.annee)!=EOF)
        {
            if(e.IdElection== IdElection)
            {
                fprintf(f2,"%d %s %d %d %d\n",nouv.IdElection,nouv.TypeElection,nouv.dateElection.jour,nouv.dateElection.mois,nouv.dateElection.annee);
                tr=1;
            }
            else
                fprintf(f2,"%d %s %d %d %d\n",e.IdElection,e.TypeElection,e.dateElection.jour,e.dateElection.mois,e.dateElection.annee);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt",filename);
    return tr;

}
int supprimer(char * filename, int IdElection)
{
    int tr=0;
     Election e;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %d %d %d\n",&e.IdElection,e.TypeElection,&e.dateElection.jour,&e.dateElection.mois,&e.dateElection.annee)!=EOF)
        {
            if(e.IdElection== IdElection)
                tr=1;
            else
                fprintf(f2,"%d %s %d %d %d\n",e.IdElection,e.TypeElection,e.dateElection.jour,e.dateElection.mois,e.dateElection.annee);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
Election chercher(char * filename, int IdElection)
{
    Election e;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %s %d %d %d\n",&e.IdElection,e.TypeElection,&e.dateElection.jour,&e.dateElection.mois,&e.dateElection.annee)!=EOF)
        {
            if(e.IdElection== IdElection)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        e.IdElection=-1;
    return e;

}

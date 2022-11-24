#ifndef LISTEORDONNE_H_INCLUDED
#define LISTEORDONNE_H_INCLUDED
void listeOrdonne( char * filename, int table[2][50]);
int count( char * filename);
typedef struct
{
    int idListe;
    int idCandidat1;
    int idCandidat2;
    int idCandidat3;
    int vote;

} listeElectorale;

#endif // LISTEORDONNE_H_INCLUDED
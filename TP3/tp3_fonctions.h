#ifndef CORR
#define CORR

void affichage_options(void);
int lire_menu(int a);
int saisirNombreEleves(void);
void saisirNotes(int nb, int tab[30][3]);
void affichage_Notes(int nb,int tab[30][3]);
float calculerMoyenneEleve(int id,int tab[30][3]);
float calculerMoyenneGenerale(int nb,int tab[30][3]);
int trouverMeilleureNoteControle(int nb,int cho,int tab[30][3]);
void afficherMeilleuresNotes (int nb, int tab[30][3]);

#endif
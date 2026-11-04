#include <stdio.h>
#include "tp3_fonctions.h"

//==============================================    
// Exo 1 =======================================
//============================================== 

void affichage_options(void)
{
    printf(" ===== GESTION DE NOTES ===== \n 1. Saisir le nombre d'eleves \n 2.Saisir les notes des eleves \n 3. Afficher toutes les notes \n 4. Afficher la moyenne d'un eleve \n 5. Afficher la moyenne general \n 6. Afficher la meilleure note de chaque controle \n 0. Quitter \n");
    return;
}
int lire_menu(int a)
{
    printf("Votre choix : ");
    switch (a)
    {
    case 1:
        printf("1\n");
        break;
    case 2:
        printf("2\n");
        break;
    case 3:
        printf("3\n");
        break;
    case 4:
        printf("4\n");
        break;
    case 5:
        printf("5\n");
        break;
    case 6:
        printf("6\n");
        break;
    case 0:
        printf("0\n");
        break;
    default:
        printf("Incomprehensible\n");
        break;
    }
    return a;
}
int saisirNombreEleves(void)
{
    int i;
    while (i>30 || i<1)
    {
        printf("Entrez le nombre d'eleves (1 a 30) : ");
        scanf("%d",&i);
        if (i>30 || i<1)
        {printf("Valeur invalide. \n");}
    }
    return i;
}
void saisirNotes(int nb, int tab[30][3])
{
    int notin=-5;
    for (int i = 0; i < nb; i++)
    {
        printf("Eleve %d \n",i+1);
        for (int j = 1; j < 4; j++)
        {   while (notin<0 || notin>20)
            {
                printf("Note du controle %d (0 a 20) :",j);
                scanf("%d",&notin);
                if (notin<0 || notin>20)
                {
                    printf("Valeur impossible.\n");
                }
            }
            tab[i][j-1]=notin;
            notin=-5;
        }
    }
    return;
}

void affichage_Notes(int nb,int tab[30][3])
{
    printf("Tableau des notes \n Eleve  C1  C2  C3 \n");
    for (int i = 0; i < nb; i++)
    {
        if (i<9){printf("    %d",i+1);} else {printf("   %d",i+1);}
        for (int j = 0; j < 3; j++)
        {
            if (tab[i][j]<10){
                printf("   %d",tab[i][j]);
            }else{
                printf("  %d",tab[i][j]);
            }
        }
        printf("\n");
    }
    return;
}
float calculerMoyenneEleve(int id,int tab[30][3])
{
    float i=tab[id-1][0]+tab[id-1][1]+tab[id-1][2];
    return i/3;
}
float calculerMoyenneGenerale(int nb,int tab[30][3])
{
    float el = 0;
    for (int i = 1; i < nb+1; i++)
    {
        el=el+calculerMoyenneEleve(i,tab);
    }
    return el/nb;
}
int trouverMeilleureNoteControle(int nb,int cho,int tab[30][3])
{
    int max=0;
    for (int i = 0; i < nb; i++)
    {
        if (tab[i][cho-1]>max)
        {
            max=tab[i][cho-1];
        }
    }
    return max;
}
void afficherMeilleuresNotes (int nb, int tab[30][3])
{
    for (int x = 0; x < 3; x++)
    {
        printf("Meilleure note au controle %d : %d \n",x+1,trouverMeilleureNoteControle(nb,x+1,tab));
    }
    return;
}

//==============================================    
// Exo 2 =======================================
//============================================== 

void afficher_menu(void)
{
    printf("=== BANQUE - Distributeur ===\n");
    printf("1 - Faire un retrait\n");
    printf("2 - Quitter\n");
}
int saisir_montant(void);
int montant_valide(int montant);
void calcul_distribution(int montant);
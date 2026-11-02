#include <stdio.h>
#include "tp3_fonctions.h"

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
}

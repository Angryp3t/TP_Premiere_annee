#include "tp3_fonctions.h"
#include <stdio.h>

int main(void)
{
    int menu=0;
    int tableau[30][3];
    affichage_options();
    scanf("%d",&menu);
    lire_menu(menu);
    int nb = saisirNombreEleves();
    return 0;
}

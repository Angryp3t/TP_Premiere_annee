#include "tp3_fonctions.h"
#include <stdio.h>

int main(void)
{
    int menu=0;
    affichage_options();
    scanf("%d",&menu);
    lire_menu(menu);
    return 0;
}

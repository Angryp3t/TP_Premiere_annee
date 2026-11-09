#include <stdio.h>
#include "fonctions.h"

int ask_taille_star(void){
    int ask;
    int valid = 0;
    while (valid == 0)
    {
        printf("Choose star size (5 to 10)");
        scanf("%d",&ask);
        printf("\n");
        if (ask>10 || ask<5)
        {
            printf("Valeur non prise en compte veuillez rechoisir !");
        } else {
            valid = 1;
        }
        
    }
    return ask;
}
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

void creation_blank_tab(char img[30][101],int w, int h){
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            img[i][j]=' ';
        }
    }
    return;
}
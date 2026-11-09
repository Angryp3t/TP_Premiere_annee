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
void affichage_star(char img[30][101], int w, int h){
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            printf("%c",img[i][j]);
        }
        printf("\n");
    }
    return;
}

void remplissage_pointe(char img[30][101], int n, int w){
    int mid = w / 2;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if((mid-count) <= j && j <= (mid+count)){
                if (j==(mid-count) || j == (mid+count))
                {
                    img[i][j]='A';
                } 
                else 
                    {img[i][j]='S';}
            }
            else if (i == n-1)
            {
                img[i][j]='_';
            } else
                {img[i][j]=' ';}
        }
        count++;
    }
    return;
}
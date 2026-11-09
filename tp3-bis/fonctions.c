#include <stdio.h>
#include "fonctions.h"

int ask_taille_star(void){
    int ask;
    printf("Choose star size (recommended 5 to 10)");
    scanf("%d",&ask);
    printf("\n");
    return ask;
}
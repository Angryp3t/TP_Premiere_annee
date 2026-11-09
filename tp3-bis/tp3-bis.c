#include <stdio.h>
#include "fonctions.h"

int main(void){
    int size = ask_taille_star();
    int widht = size * size;
    int max_height = 3* size -1 ;
    char img[30][101];
    creation_blank_tab(img,widht,max_height);
    printf("%d \n",size);
    remplissage_pointe(img, size, widht);
    remplissage_corps(img, size, widht);
    affichage_star(img,widht,max_height);

    return 0;
}
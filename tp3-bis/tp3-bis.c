#include <stdio.h>
#include "fonctions.h"

int main(void){
    int size = ask_taille_star();
    int widht = size * size;
    int max_height = 3* size -1 ;
    printf("%d \n",size);
    return 0;
}